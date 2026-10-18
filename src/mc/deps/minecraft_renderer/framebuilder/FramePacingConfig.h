#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct FramePacingConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mSquareLatency;
    ::ll::TypedStorage<4, 4, float> mTargetLatencyMs;
    ::ll::TypedStorage<4, 4, float> mCacheTimeTolerance;
    ::ll::TypedStorage<4, 4, float> mLatencyHistoryWeight;
    ::ll::TypedStorage<4, 4, float> mLatencyModifier;
    ::ll::TypedStorage<4, 4, int>   mLatencyAdjustmentMethod;
    ::ll::TypedStorage<4, 4, int>   mNumFramesBeforeLatency;
    ::ll::TypedStorage<4, 4, int>   mTimeTypeToUseWhenDecreasingFrameRate;
    ::ll::TypedStorage<4, 4, int>   mTimeTypeToUseWhenIncreasingFrameRate;
    ::ll::TypedStorage<4, 4, float> mLateFrameTolerance;
    ::ll::TypedStorage<4, 4, int>   mNumFramesTracked;
    ::ll::TypedStorage<1, 1, bool>  mConsiderMainThreadTime;
    ::ll::TypedStorage<1, 1, bool>  mStatsOnly;
    ::ll::TypedStorage<4, 4, float> mBaseTargetFrameTimeMs;
    ::ll::TypedStorage<4, 4, float> mTheoreticalFastestRenderTimeMs;
    ::ll::TypedStorage<4, 4, float> mLatencyAdjustedTargetFrameTimeMs;
    ::ll::TypedStorage<4, 4, float> mLatencyAdjustmentTimeMs;
    ::ll::TypedStorage<4, 4, float> mLateFrameFraction;
    ::ll::TypedStorage<4, 4, float> mGpuTimeMs;
    ::ll::TypedStorage<1, 1, bool>  mUsingMainThreadTime;
    ::ll::TypedStorage<4, 4, float> mRenderThreadCpuTimeMs;
    ::ll::TypedStorage<4, 4, float> mMainThreadCpuTimeMs;
    // NOLINTEND
};
#else // @header-generator platform
struct FramePacingConfig {};
#endif // @header-generator platform

} // namespace mce::framebuilder
