#include "ModuleFiles.h"
#include <algorithm>
#include <array>
#include <cerrno>
#include <cstdlib>
#include <cstring>
#include <dlfcn.h>
#include <fcntl.h>
#include <limits.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>

namespace ll::android {
namespace {
constexpr size_t MaxModuleBytes = 256 * 1024 * 1024;
class Fd {
public:
    explicit Fd(int value = -1) : value(value) {}
    ~Fd() {
        if (value >= 0) ::close(value);
    }
    Fd(Fd const&)            = delete;
    Fd& operator=(Fd const&) = delete;
        operator int() const noexcept { return value; }

private:
    int value;
};
bool writeAll(int fd, void const* pointer, size_t size) noexcept {
    auto* data = static_cast<uint8_t const*>(pointer);
    while (size) {
        auto wrote = ::write(fd, data, size);
        if (wrote < 0 && errno == EINTR) continue;
        if (wrote <= 0) return false;
        data += wrote;
        size -= static_cast<size_t>(wrote);
    }
    return true;
}
bool childDirectory(int parent, char const* name) noexcept {
    if (::mkdirat(parent, name, 0700) != 0 && errno != EEXIST) return false;
    struct stat info{};
    return ::fstatat(parent, name, &info, AT_SYMLINK_NOFOLLOW) == 0 && S_ISDIR(info.st_mode);
}
bool compare(int source, int destination, size_t expected) noexcept {
    auto readAt = [](int fd, uint8_t* data, size_t amount, size_t offset) {
        size_t total{};
        while (total < amount) {
            auto count =
                TEMP_FAILURE_RETRY(::pread(fd, data + total, amount - total, static_cast<off_t>(offset + total)));
            if (count <= 0) return false;
            total += static_cast<size_t>(count);
        }
        return true;
    };
    std::array<uint8_t, 16384> a{}, b{};
    for (size_t offset = 0; offset < expected;) {
        size_t amount = std::min(a.size(), expected - offset);
        if (!readAt(source, a.data(), amount, offset) || !readAt(destination, b.data(), amount, offset)
            || std::memcmp(a.data(), b.data(), amount))
            return false;
        offset += amount;
    }
    return true;
}
bool component(std::string_view value) noexcept {
    return !value.empty() && value != "." && value != ".." && value.find('/') == value.npos
        && value.find('\\') == value.npos && value.find('\0') == value.npos;
}
} // namespace
ModuleFile::~ModuleFile() {
    if (mapping) ::munmap(mapping, size);
}
bool ModuleFile::open(std::string const& path) noexcept {
    if (mapping) return false;
    Fd          fd(::open(path.c_str(), O_RDONLY | O_CLOEXEC | O_NOFOLLOW));
    struct stat info{};
    if (fd < 0 || TEMP_FAILURE_RETRY(::fstat(fd, &info)) || !S_ISREG(info.st_mode) || info.st_size <= 0
        || static_cast<uint64_t>(info.st_size) > MaxModuleBytes)
        return false;
    auto value = ::mmap(nullptr, static_cast<size_t>(info.st_size), PROT_READ, MAP_PRIVATE, fd, 0);
    if (value == MAP_FAILED) return false;
    mapping = value;
    size    = static_cast<size_t>(info.st_size);
    return true;
}
bool readManifestFile(std::string const& directory, std::string& content) noexcept {
    Fd root(::open(directory.c_str(), O_RDONLY | O_DIRECTORY | O_CLOEXEC | O_NOFOLLOW));
    if (root < 0) return false;
    Fd          file(::openat(root, "manifest.json", O_RDONLY | O_CLOEXEC | O_NOFOLLOW));
    struct stat before{}, after{};
    if (file < 0 || TEMP_FAILURE_RETRY(::fstat(file, &before)) || !S_ISREG(before.st_mode) || before.st_size <= 0
        || before.st_size > 65536)
        return false;
    content.resize(static_cast<size_t>(before.st_size));
    size_t offset{};
    while (offset < content.size()) {
        auto count = ::read(file, content.data() + offset, content.size() - offset);
        if (count < 0 && errno == EINTR) continue;
        if (count <= 0) return false;
        offset += static_cast<size_t>(count);
    }
    char extra{};
    return TEMP_FAILURE_RETRY(::read(file, &extra, 1)) == 0 && TEMP_FAILURE_RETRY(::fstat(file, &after)) == 0
        && before.st_size == after.st_size && before.st_mtim.tv_sec == after.st_mtim.tv_sec
        && before.st_mtim.tv_nsec == after.st_mtim.tv_nsec;
}
bool makeModDataDirectories(std::string const& directory) noexcept {
    Fd root(::open(directory.c_str(), O_RDONLY | O_DIRECTORY | O_CLOEXEC | O_NOFOLLOW));
    if (root < 0) return false;
    return childDirectory(root, "data") && childDirectory(root, "config") && childDirectory(root, "resources");
}
bool preparePrivateGeneration(void const* symbol, std::string& selfPath, std::string& generation) noexcept {
    Dl_info information{};
    if (!::dladdr(symbol, &information) || !information.dli_fname) return false;
    std::array<char, PATH_MAX> resolved{};
    if (!::realpath(information.dli_fname, resolved.data())) return false;
    selfPath      = resolved.data();
    auto position = selfPath.rfind('/');
    if (position == std::string::npos) return false;
    auto parent = selfPath.substr(0, position);
    // Use the actually loaded private cache, never an external source directory.
    auto cache = parent.find("/cache/native_mods/");
    if (cache == std::string::npos || !(parent.starts_with("/data/user/") || parent.starts_with("/data/data/")))
        return false;
    struct stat privateRoot{};
    auto        dataRoot = parent.substr(0, cache);
    if (::stat(dataRoot.c_str(), &privateRoot) || privateRoot.st_uid != ::geteuid() || (privateRoot.st_mode & 0077))
        return false;
    Fd          directory(::open(parent.c_str(), O_RDONLY | O_DIRECTORY | O_CLOEXEC | O_NOFOLLOW));
    struct stat info{};
    if (directory < 0 || ::fstat(directory, &info) || info.st_uid != ::geteuid()
        || !childDirectory(directory, "ll-native"))
        return false;
    std::string pattern = parent + "/ll-native/generation-XXXXXX";
    if (!::mkdtemp(pattern.data())) return false;
    generation = std::move(pattern);
    return true;
}
bool copyModToCache(
    std::string const& source,
    std::string_view   entry,
    std::string_view   id,
    std::string_view   manifest,
    std::string const& generation,
    std::string&       copied,
    std::string*       error
) noexcept {
    auto fail = [error](std::string message) {
        if (error) *error = std::move(message);
        return false;
    };
    if (!component(entry) || !component(id)) return fail("invalid path component");
    std::string filename(entry), directoryName(id);
    Fd          sourceDirectory(::open(source.c_str(), O_RDONLY | O_DIRECTORY | O_CLOEXEC | O_NOFOLLOW));
    Fd          outputRoot(::open(generation.c_str(), O_RDONLY | O_DIRECTORY | O_CLOEXEC | O_NOFOLLOW));
    if (sourceDirectory < 0 || outputRoot < 0 || ::mkdirat(outputRoot, directoryName.c_str(), 0700))
        return fail("cannot open source or create cache directory");
    Fd outputDirectory(::openat(outputRoot, directoryName.c_str(), O_RDONLY | O_DIRECTORY | O_CLOEXEC | O_NOFOLLOW));
    Fd input(::openat(sourceDirectory, filename.c_str(), O_RDONLY | O_CLOEXEC | O_NOFOLLOW));
    struct stat before{}, after{};
    if (outputDirectory < 0 || input < 0 || TEMP_FAILURE_RETRY(::fstat(input, &before)) || !S_ISREG(before.st_mode)
        || before.st_size <= 0 || static_cast<uint64_t>(before.st_size) > MaxModuleBytes)
        return fail("cannot read source file metadata");
    Fd output(::openat(outputDirectory, filename.c_str(), O_RDWR | O_CREAT | O_EXCL | O_CLOEXEC | O_NOFOLLOW, 0600));
    if (output < 0) return fail("cannot create cache file");
    std::array<uint8_t, 16384> buffer{};
    size_t                     copiedBytes{};
    while (copiedBytes < static_cast<size_t>(before.st_size)) {
        auto count =
            ::read(input, buffer.data(), std::min(buffer.size(), static_cast<size_t>(before.st_size) - copiedBytes));
        if (count < 0 && errno == EINTR) continue;
        if (count <= 0 || !writeAll(output, buffer.data(), static_cast<size_t>(count)))
            return fail("cannot copy source bytes");
        copiedBytes += static_cast<size_t>(count);
    }
    char extra{};
    auto remaining = TEMP_FAILURE_RETRY(::read(input, &extra, 1));
    if (remaining < 0)
        return fail("source end check returned " + std::to_string(remaining) + ": " + std::strerror(errno));
    if (remaining > 0) return fail("source grew while copying");
    if (TEMP_FAILURE_RETRY(::fstat(input, &after)))
        return fail("cannot recheck source metadata: " + std::string(std::strerror(errno)));
    if (before.st_size != after.st_size) return fail("source size changed while copying");
    // External Android storage can refresh mtime on its first read. Verify the
    // complete copy against a stable source snapshot after that read instead.
    if (!compare(input, output, copiedBytes)) return fail("cache byte comparison failed");
    struct stat verified{};
    if (TEMP_FAILURE_RETRY(::fstat(input, &verified)))
        return fail("cannot verify source metadata: " + std::string(std::strerror(errno)));
    if (after.st_size != verified.st_size || after.st_mtim.tv_sec != verified.st_mtim.tv_sec
        || after.st_mtim.tv_nsec != verified.st_mtim.tv_nsec)
        return fail("source size/mtime changed during byte comparison");
    if (TEMP_FAILURE_RETRY(::fsync(output))) return fail("cannot synchronize cache file");
    if (TEMP_FAILURE_RETRY(::fchmod(output, 0400))) return fail("cannot make cache file read-only");
    Fd metadata(::openat(outputDirectory, "manifest.json", O_WRONLY | O_CREAT | O_EXCL | O_CLOEXEC | O_NOFOLLOW, 0600));
    if (metadata < 0 || !writeAll(metadata, manifest.data(), manifest.size()) || TEMP_FAILURE_RETRY(::fsync(metadata))
        || TEMP_FAILURE_RETRY(::fchmod(metadata, 0400)))
        return fail("cannot write read-only cache manifest");
    copied = generation + '/' + directoryName + '/' + filename;
    return true;
}
} // namespace ll::android
