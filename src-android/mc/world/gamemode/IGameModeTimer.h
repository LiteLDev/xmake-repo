#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeTimer {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IGameModeTimer();

    virtual double getDestroyProgressSeconds() const = 0;

    virtual std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> getCurrentDestroyDelayTime() const = 0;

    virtual void tick() = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
