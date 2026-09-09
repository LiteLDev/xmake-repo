#pragma once
#include "ll/core/android/KernelContext.h"

namespace ll::android {
class KernelLogger {
public:
    KernelLogger(KernelContext& context, FallbackLog fallback) noexcept : context(context), fallback(fallback) {}
    void write(int32_t level, char const* message, size_t size) noexcept;
    void write(int32_t level, std::string_view message) noexcept { write(level, message.data(), message.size()); }
    static bool validUtf8(char const* message, size_t size) noexcept;

private:
    KernelContext& context;
    FallbackLog    fallback;
};
} // namespace ll::android
