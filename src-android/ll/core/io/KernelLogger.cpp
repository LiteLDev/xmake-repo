#include "ll/core/io/KernelLogger.h"

namespace ll::android {
bool KernelLogger::validUtf8(char const* message, size_t size) noexcept {
    if (!message && size) return false;
    auto bytes = reinterpret_cast<unsigned char const*>(message);
    for (size_t i = 0; i < size;) {
        unsigned char first = bytes[i++];
        if (!first) return false;
        if (first < 0x80) continue;
        size_t        remaining;
        unsigned char lower = 0x80, upper = 0xBF;
        if (first >= 0xC2 && first <= 0xDF) remaining = 1;
        else if (first >= 0xE0 && first <= 0xEF) {
            remaining = 2;
            if (first == 0xE0) lower = 0xA0;
            if (first == 0xED) upper = 0x9F;
        } else if (first >= 0xF0 && first <= 0xF4) {
            remaining = 3;
            if (first == 0xF0) lower = 0x90;
            if (first == 0xF4) upper = 0x8F;
        } else return false;
        if (remaining > size - i || bytes[i] < lower || bytes[i] > upper) return false;
        ++i;
        for (size_t n = 1; n < remaining; ++n, ++i) {
            if (bytes[i] < 0x80 || bytes[i] > 0xBF) return false;
        }
    }
    return true;
}
void KernelLogger::write(int32_t level, char const* message, size_t size) noexcept {
    if (!size || size > 4096 || level < 0 || level > 5 || !validUtf8(message, size)) return;
    constexpr int32_t priorities[] = {3, 3, 4, 5, 6, 6};
    context.write(priorities[level], {message, size}, fallback);
}
} // namespace ll::android
