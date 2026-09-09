#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Timer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTicksPerSecond;
    ::ll::TypedStorage<4, 4, int>   mTicks;
    ::ll::TypedStorage<4, 4, float> mAlpha;
    ::ll::TypedStorage<4, 4, float> mTimeScale;
    ::ll::TypedStorage<4, 4, float> mPassedTime;
    ::ll::TypedStorage<4, 4, float> mFrameStepAlignmentRemainder;
    ::ll::TypedStorage<4, 4, float> mLastTimeSeconds;
    ::ll::TypedStorage<4, 4, float> mLastTimestep;
    ::ll::TypedStorage<4, 4, float> mOverflowTime;
    ::ll::TypedStorage<8, 8, long>  mLastMs;
    ::ll::TypedStorage<8, 8, long>  mLastMsSysTime;
    ::ll::TypedStorage<4, 4, float> mAdjustTime;
    ::ll::TypedStorage<4, 4, float> mSteppingTick;
    ::ll::UntypedStorage<8, 48>     mGetTimeMSCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    Timer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Timer(float, std::function<long()>);

    MCNAPI void advanceTime(float);

    MCNAPI float getAlpha() const;

    MCNAPI ulong getTicks() const;

    MCNAPI float getTime() const;

    MCNAPI float getTimeScale() const;

    MCNAPI int popOverflowTicks();

    MCNAPI void resetTimePassed();

    MCNAPI void setTimeScale(float);

    MCNAPI void stepTick(int);

    MCNAPI void stepTick(float);

    MCNAPI bool stepping() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static long getMillisecondsSinceLaunch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float, std::function<long()>);
    // NOLINTEND
};
