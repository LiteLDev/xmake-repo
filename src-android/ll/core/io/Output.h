#pragma once
#include <cstdint>

namespace ll::android {
struct LogMirror;
LogMirror platformLogMirror() noexcept;
void      fallbackLog(int32_t priority, char const* message) noexcept;
} // namespace ll::android
