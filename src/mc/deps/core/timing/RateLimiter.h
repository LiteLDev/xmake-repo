#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RateLimiter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ulong const> mLimit;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>> const> mTimeIntervalSeconds;
    ::ll::TypedStorage<8, 24, std::vector<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mInstances;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnke6cfa5;
    ::ll::UntypedStorage<8, 8>  mUnkaf5425;
    ::ll::UntypedStorage<8, 24> mUnke3fa43;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RateLimiter& operator=(RateLimiter const&);
    RateLimiter(RateLimiter const&);
#endif // @header-generator platform
    RateLimiter();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RateLimiter(ulong const, std::chrono::duration<long long, std::ratio<1, 1>> const);

    MCNAPI bool tryAddInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong const, std::chrono::duration<long long, std::ratio<1, 1>> const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool tryAddInstance();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
