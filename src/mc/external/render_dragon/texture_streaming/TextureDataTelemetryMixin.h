#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureDataTelemetryMixin {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRequestedTime;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct TextureDataTelemetryMixin {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
