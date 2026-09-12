#include "ll/api/thread/ThreadName.h"

#include <pthread.h>

namespace ll::thread {
std::optional<std::string> getThreadName(std::thread::id id) {
    if (id != std::this_thread::get_id()) return std::nullopt;
    char name[16]{};
    if (::pthread_getname_np(::pthread_self(), name, sizeof(name))) return std::nullopt;
    return std::string(name);
}

bool setThreadName(std::string_view name, std::thread::id id) {
    if (id != std::this_thread::get_id() || name.find('\0') != std::string_view::npos) return false;
    // Android's pthread API accepts at most 15 bytes, excluding the terminator.
    // Report longer names as unsupported instead of reporting a changed name.
    if (name.size() >= 16) return false;
    return ::pthread_setname_np(::pthread_self(), std::string(name).c_str()) == 0;
}
} // namespace ll::thread
