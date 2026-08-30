#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct TextureDataTelemetryMixin {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRequestedTime;
    // clang-format on
    // NOLINTEND
};

} // namespace dragon::texturestreaming
