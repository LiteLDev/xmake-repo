#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RateLimiter {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ulong const> mLimit;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>> const> mTimeIntervalSeconds;
    ::ll::TypedStorage<8, 24, std::vector<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mInstances;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RateLimiter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RateLimiter(ulong const, std::chrono::duration<long long, std::ratio<1, 1>> const);

    MCNAPI bool tryAddInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong const, std::chrono::duration<long long, std::ratio<1, 1>> const);
    // NOLINTEND
};
