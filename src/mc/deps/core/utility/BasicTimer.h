#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BasicTimer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, double> mTimeDelay;
    ::ll::TypedStorage<8, 8, double> mStartTime;
    ::ll::UntypedStorage<8, 48>      mGetCurrentTimeCallback;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, double>                     mTimeDelay;
    ::ll::TypedStorage<8, 8, double>                     mStartTime;
    ::ll::TypedStorage<8, 64, ::std::function<double()>> mGetCurrentTimeCallback;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    BasicTimer& operator=(BasicTimer const&);
    BasicTimer(BasicTimer const&);
#else // @header-generator platform
    BasicTimer();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BasicTimer(double, std::function<double()>);
#else // @header-generator platform
    MCAPI BasicTimer(double timeDelay, ::std::function<double()> getTimeCallback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finishTimer();

    MCNAPI double getTimeDelay() const;

    MCNAPI bool hasExpired() const;

    MCNAPI bool isFinished() const;

    MCNAPI void resetTime();

    MCNAPI void resetTime(double);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isFinished() const;

    MCAPI void resetTime();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static double getSecondsSinceLaunch();
#else // @header-generator platform
    MCFOLD static double getSecondsSinceLaunch();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(double, std::function<double()>);
#else // @header-generator platform
    MCAPI void* $ctor(double timeDelay, ::std::function<double()> getTimeCallback);
#endif // @header-generator platform
    // NOLINTEND
};
