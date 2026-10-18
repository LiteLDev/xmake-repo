#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UnloadedChunkTimerComponent {
public:
    // UnloadedChunkTimerComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Duration_t = std::chrono::duration<long long, std::ratio<1, 1>>;
#else // @header-generator platform
    using Duration_t = ::std::chrono::seconds;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                  mDuration;
#endif // @header-generator platform
    // NOLINTEND
};
