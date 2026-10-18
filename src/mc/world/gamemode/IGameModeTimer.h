#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeTimer {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IGameModeTimer();
#else // @header-generator platform
    virtual ~IGameModeTimer() = default;
#endif // @header-generator platform

    virtual double getDestroyProgressSeconds() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> getCurrentDestroyDelayTime() const = 0;
#else // @header-generator platform
    virtual ::std::chrono::steady_clock::time_point getCurrentDestroyDelayTime() const = 0;
#endif // @header-generator platform

    virtual void tick() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
