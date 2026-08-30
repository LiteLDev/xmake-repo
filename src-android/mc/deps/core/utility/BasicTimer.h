#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BasicTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double> mTimeDelay;
    ::ll::TypedStorage<8, 8, double> mStartTime;
    ::ll::UntypedStorage<8, 48>      mGetCurrentTimeCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicTimer& operator=(BasicTimer const&);
    BasicTimer(BasicTimer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BasicTimer(double, std::function<double()>);

    MCNAPI void finishTimer();

    MCNAPI double getTimeDelay() const;

    MCNAPI bool hasExpired() const;

    MCNAPI bool isFinished() const;

    MCNAPI void resetTime();

    MCNAPI void resetTime(double);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static double getSecondsSinceLaunch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(double, std::function<double()>);
    // NOLINTEND
};
