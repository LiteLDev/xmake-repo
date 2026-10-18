#if defined(_WIN32) || defined(__ANDROID__)
#include "ll/core/io/Output.h"
#if defined(_WIN32)
#include "ll/core/io/LogPipe.h"
#include "ll/api/utils/StringUtils.h"
#endif

#if defined(__ANDROID__)
#include <android/log.h>
#include <limits>

#else
#include "Windows.h"
#include "io.h"
#endif
namespace ll::io {
#if defined(__ANDROID__)
void defaultOutputImpl(std::string_view text) {
    // The original DefaultSink/FileSink retains the complete record. logcat
    // has its own message-size limit, so send large output in bounded chunks.
    constexpr size_t chunkSize = 3000;
    while (!text.empty()) {
        auto count = std::min(text.size(), chunkSize);
        if (count != text.size()) {
            while (count && (static_cast<unsigned char>(text[count]) & 0xc0) == 0x80) --count;
            if (!count) count = std::min(text.size(), chunkSize);
#else
void defaultOutputImpl(std::string_view sv) { 
    getDefaultLogPipe().write(sv); 
    auto fd = _fileno(stdout);
    if (_isatty(fd)) {
        auto wstr = string_utils::str2wstr(sv);
        if (WriteConsoleW((HANDLE)_get_osfhandle(fd), wstr.data(), (DWORD)wstr.size(), nullptr, nullptr)) {
            return;
#endif
        }
#if defined(__ANDROID__)
        __android_log_print(ANDROID_LOG_INFO, "LeviLamina", "%.*s", static_cast<int>(count), text.data());
        text.remove_prefix(count);
#endif
    }
#if defined(_WIN32)
    std::fwrite(sv.data(), sizeof(char), sv.size(), stdout);
#endif
}
} // namespace ll::io

#endif
