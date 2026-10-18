#if defined(_WIN32) || defined(__ANDROID__)
#include "ll/api/thread/ThreadName.h"
#if defined(_WIN32)
#include "ll/api/utils/StringUtils.h"
#endif

#if defined(__ANDROID__)
#include <pthread.h>
#else
#include "Windows.h"
#endif

namespace ll::thread {
std::optional<std::string> getThreadName(std::thread::id id) {
#if defined(__ANDROID__)
    if (id != std::this_thread::get_id()) return std::nullopt;
    char name[16]{};
    if (::pthread_getname_np(::pthread_self(), name, sizeof(name))) return std::nullopt;
    return std::string(name);
}
#else
    std::optional<std::string> res;
#endif

#if defined(_WIN32)
    auto tid = id._Get_underlying_id();

    HANDLE thread =
        tid == GetCurrentThreadId() ? GetCurrentThread() : OpenThread(THREAD_SET_LIMITED_INFORMATION, FALSE, tid);
    if (!thread) {
        return res;
    }
    PWSTR   data{};
    HRESULT hr = GetThreadDescription(thread, &data);
    if (SUCCEEDED(hr) && data) {
        res = string_utils::wstr2str(data);
        LocalFree(data);
    }
    if (tid != GetCurrentThreadId()) {
        CloseHandle(thread);
    }
    return res;
}
#endif
bool setThreadName(std::string_view name, std::thread::id id) {
#if defined(__ANDROID__)
    if (id != std::this_thread::get_id() || name.find('\0') != std::string_view::npos) return false;
    // Android's pthread API accepts at most 15 bytes, excluding the terminator.
    // Report longer names as unsupported instead of reporting a changed name.
    if (name.size() >= 16) return false;
    return ::pthread_setname_np(::pthread_self(), std::string(name).c_str()) == 0;
#else

    auto tid = id._Get_underlying_id();

    HANDLE thread =
        tid == GetCurrentThreadId() ? GetCurrentThread() : OpenThread(THREAD_SET_LIMITED_INFORMATION, FALSE, tid);
    if (!thread) {
        return false;
    }
    auto res = SetThreadDescription(thread, string_utils::str2wstr(name).c_str());

    if (tid != GetCurrentThreadId()) {
        CloseHandle(thread);
    }
    return SUCCEEDED(res);
#endif
}
} // namespace ll::thread

#endif
