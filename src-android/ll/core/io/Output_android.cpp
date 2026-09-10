#include "ll/core/KernelContext.h"
#include "ll/core/io/Output.h"
#include <android/log.h>
#include <cerrno>
#include <cstdio>
#include <fcntl.h>
#include <string>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

namespace ll::android {
namespace {
// All access is serialized by KernelContext's existing logging/reset mutex.
int  transcript = -1;
void append(char const* data, size_t size) noexcept {
    while (transcript >= 0 && size) {
        auto amount = ::write(transcript, data, size);
        if (amount < 0 && errno == EINTR) continue;
        if (amount <= 0) return;
        data += amount;
        size -= static_cast<size_t>(amount);
    }
}
void openTranscript(std::string_view dataPath) noexcept {
    if (transcript >= 0 || dataPath.empty()) return;
    std::string path(dataPath);
    if (::mkdir(path.c_str(), 0700) && errno != EEXIST) return;
    int directory = ::open(path.c_str(), O_RDONLY | O_DIRECTORY | O_CLOEXEC | O_NOFOLLOW);
    if (directory < 0) return;
    timespec now{};
    ::clock_gettime(CLOCK_REALTIME, &now);
    char name[112];
    int  count = std::snprintf(
        name,
        sizeof(name),
        "levilamina-%d-%lld-%09ld.log",
        getpid(),
        static_cast<long long>(now.tv_sec),
        now.tv_nsec
    );
    if (count > 0 && static_cast<size_t>(count) < sizeof(name))
        transcript = ::openat(directory, name, O_WRONLY | O_CREAT | O_EXCL | O_CLOEXEC | O_NOFOLLOW, 0600);
    ::close(directory);
}
void mirrorMessage(int32_t priority, std::string_view message) noexcept {
    if (transcript < 0) return;
    timespec now{};
    ::clock_gettime(CLOCK_REALTIME, &now);
    char prefix[96];
    int  count = std::snprintf(
        prefix,
        sizeof(prefix),
        "%lld.%09ld pid=%d priority=%d ",
        static_cast<long long>(now.tv_sec),
        now.tv_nsec,
        getpid(),
        priority
    );
    if (count > 0 && static_cast<size_t>(count) < sizeof(prefix)) append(prefix, static_cast<size_t>(count));
    append(message.data(), message.size());
    append("\n", 1);
}
void closeTranscript() noexcept {
    if (transcript < 0) return;
    mirrorMessage(ANDROID_LOG_INFO, "LeviLamina: context cleared");
    ::fdatasync(transcript);
    ::close(transcript);
    transcript = -1;
}
} // namespace
LogMirror platformLogMirror() noexcept { return {openTranscript, mirrorMessage, closeTranscript}; }
void      fallbackLog(int32_t priority, char const* message) noexcept {
    __android_log_write(priority, "LeviLamina", message);
}
} // namespace ll::android
