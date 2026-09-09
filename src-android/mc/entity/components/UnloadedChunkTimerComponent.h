#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UnloadedChunkTimerComponent {
public:
    // UnloadedChunkTimerComponent inner types define
    using Duration_t = std::chrono::duration<long long, std::ratio<1, 1>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mDuration;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& DURATION();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& ZERO();
    // NOLINTEND
};
