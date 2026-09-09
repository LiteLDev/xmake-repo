#pragma once
#include <cstdint>

namespace ll::android {
void fallbackLog(int32_t priority, char const* message) noexcept;
}
