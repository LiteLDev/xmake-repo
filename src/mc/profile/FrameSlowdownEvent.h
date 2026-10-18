#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrameSlowdownEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> eventTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> eventDuration;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> maximumFrameTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> currentMedianFrameTime;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> eventTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              eventDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              maximumFrameTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              currentMedianFrameTime;
#endif // @header-generator platform
    // NOLINTEND
};
