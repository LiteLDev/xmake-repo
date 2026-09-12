#include "ll/core/io/Output.h"

#include <android/log.h>
#include <limits>

namespace ll::io {
void defaultOutputImpl(std::string_view text) {
    // The original DefaultSink/FileSink retains the complete record. logcat
    // has its own message-size limit, so send large output in bounded chunks.
    constexpr size_t chunkSize = 3000;
    while (!text.empty()) {
        auto count = std::min(text.size(), chunkSize);
        if (count != text.size()) {
            while (count && (static_cast<unsigned char>(text[count]) & 0xc0) == 0x80) --count;
            if (!count) count = std::min(text.size(), chunkSize);
        }
        __android_log_print(ANDROID_LOG_INFO, "LeviLamina", "%.*s", static_cast<int>(count), text.data());
        text.remove_prefix(count);
    }
}
} // namespace ll::io
