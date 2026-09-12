#include "ll/core/mod/ModuleFiles.h"

#include <algorithm>
#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <unistd.h>

namespace {
std::string fault;
bool        injected{};
int         sourceStats{};
int         preadCalls{};

bool interrupt(std::string_view operation) {
    if (fault != operation || injected) return false;
    injected = true;
    errno    = EINTR;
    return true;
}
} // namespace

extern "C" ssize_t __real_read(int, void*, size_t);
extern "C" ssize_t __wrap_read(int fd, void* data, size_t size) {
    if (size == 1 && interrupt("end-eintr")) return -1;
    return __real_read(fd, data, size);
}
extern "C" ssize_t __real_pread(int, void*, size_t, off_t);
extern "C" ssize_t __wrap_pread(int fd, void* data, size_t size, off_t offset) {
    if (++preadCalls == 2 && interrupt("second-pread-eintr")) return -1;
    if (interrupt("pread-eintr")) return -1;
    if (fault == "short-pread") {
        size     = std::min(size, size_t{307});
        injected = true;
    }
    auto result = __real_pread(fd, data, size, offset);
    if (fault == "changed-bytes" && !injected && result > 0) {
        static_cast<uint8_t*>(data)[0] ^= 1;
        injected                        = true;
    }
    return result;
}
extern "C" int __real_fstat(int, struct stat*);
extern "C" int __wrap_fstat(int fd, struct stat* info) {
    ++sourceStats;
    if (sourceStats == 2 && interrupt("stat-eintr")) return -1;
    int result = __real_fstat(fd, info);
    if (!result
        && ((sourceStats == 1 && fault == "mtime-refresh") || (sourceStats == 3 && fault == "changed-source"))) {
        ++info->st_mtim.tv_sec;
        injected = true;
    }
    return result;
}
extern "C" int __real_fsync(int);
extern "C" int __wrap_fsync(int fd) {
    if (interrupt("fsync-eintr")) return -1;
    return __real_fsync(fd);
}

int main(int argc, char** argv) {
    if (argc != 2) return 2;
    std::string root = "/data/local/tmp/ll-p7-20260910/io-XXXXXX";
    if (!::mkdtemp(root.data())) return 3;
    auto source = root + "/source", generation = root + "/generation";
    if (::mkdir(source.c_str(), 0700) || ::mkdir(generation.c_str(), 0700)) return 4;
    std::string bytes(32791, '\0');
    for (size_t i = 0; i < bytes.size(); ++i) bytes[i] = static_cast<char>(i * 17);
    {
        std::ofstream output(source + "/libOwned.so", std::ios::binary);
        if (!output.write(bytes.data(), bytes.size()).flush()) return 5;
    }
    fault = argv[1];
    std::string copied, error;
    bool        result = ll::android::copyModToCache(source, "libOwned.so", "owned", "{}", generation, copied, &error);
    if (fault == "changed-source" || fault == "changed-bytes") {
        auto expected = fault == "changed-source" ? "source size/mtime changed" : "cache byte comparison failed";
        if (result || !injected || error.find(expected) == std::string::npos) return 6;
    } else {
        if (!result) {
            std::fprintf(stderr, "%s failed: %s\n", fault.c_str(), error.c_str());
            return 7;
        }
        if (fault != "normal" && !injected) return 8;
        ll::android::ModuleFile file;
        if (!file.open(copied) || file.bytes().size() != bytes.size()
            || !std::equal(file.bytes().begin(), file.bytes().end(), reinterpret_cast<uint8_t const*>(bytes.data())))
            return 9;
        struct stat info{};
        if (::stat(copied.c_str(), &info) || (info.st_mode & 0777) != 0400) return 10;
    }
    std::printf("%s passed; evidence=%s\n", fault.c_str(), root.c_str());
}
