#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Timer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                     mTicksPerSecond;
    ::ll::TypedStorage<4, 4, int>                       mTicks;
    ::ll::TypedStorage<4, 4, float>                     mAlpha;
    ::ll::TypedStorage<4, 4, float>                     mTimeScale;
    ::ll::TypedStorage<4, 4, float>                     mPassedTime;
    ::ll::TypedStorage<4, 4, float>                     mFrameStepAlignmentRemainder;
    ::ll::TypedStorage<4, 4, float>                     mLastTimeSeconds;
    ::ll::TypedStorage<4, 4, float>                     mLastTimestep;
    ::ll::TypedStorage<4, 4, float>                     mOverflowTime;
    ::ll::TypedStorage<8, 8, int64>                     mLastMs;
    ::ll::TypedStorage<8, 8, int64>                     mLastMsSysTime;
    ::ll::TypedStorage<4, 4, float>                     mAdjustTime;
    ::ll::TypedStorage<4, 4, float>                     mSteppingTick;
    ::ll::TypedStorage<8, 64, ::std::function<int64()>> mGetTimeMSCallback;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Timer();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Timer(float, std::function<long()>);
#else // @header-generator platform
    MCAPI Timer(float ticksPerSecond, ::std::function<int64()> getTimeMSCallback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void advanceTime(float preferredFrameStep);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static long getMillisecondsSinceLaunch();
#else // @header-generator platform
    MCAPI static int64 getMillisecondsSinceLaunch();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(float, std::function<long()>);
#else // @header-generator platform
    MCAPI void* $ctor(float ticksPerSecond, ::std::function<int64()> getTimeMSCallback);
#endif // @header-generator platform
    // NOLINTEND
};
