#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BasicTestProfileStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mMinecraftGameUpdateTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mMinecraftGameEndFrameTime;
    // NOLINTEND
};
