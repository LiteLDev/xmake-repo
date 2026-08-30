#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct PointLightParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mLightUpdateFrequency;
    ::ll::TypedStorage<4, 4, uint>  mLightsPerScoreComputeBatch;
    ::ll::TypedStorage<4, 4, float> mShadowBias;
    ::ll::TypedStorage<4, 4, float> mShadowSlopeBias;
    ::ll::TypedStorage<4, 4, float> mShadowFarPlane;
    ::ll::TypedStorage<4, 4, float> mShadowNearPlane;
    ::ll::TypedStorage<4, 4, int>   mMaxPointLight;
    ::ll::TypedStorage<4, 4, int>   mMaxProbeUpdatesPerFrame;
    ::ll::TypedStorage<4, 4, int>   mMaxGrowthsPerFrame;
    ::ll::TypedStorage<4, 4, int>   mMaxShrinksPerFrame;
    ::ll::TypedStorage<4, 4, int>   mMaxInvalidatesPerFrame;
    ::ll::TypedStorage<4, 4, int>   mStartTileDimension;
    ::ll::TypedStorage<4, 4, int>   mMinTileDimension;
    ::ll::TypedStorage<4, 4, int>   mMaxTileDimension;
    ::ll::TypedStorage<4, 4, int>   mTileGrowthIncrement;
    ::ll::TypedStorage<4, 4, int>   mMinGrowthThreshold;
    ::ll::TypedStorage<8, 8, ulong> mBaseGrowCooldownMs;
    ::ll::TypedStorage<8, 8, ulong> mBaseShrinkCooldownMs;
    ::ll::TypedStorage<8, 8, ulong> mBaseInvalidateCooldownMs;
    ::ll::TypedStorage<8, 8, ulong> mBudgetSkipCooldownMs;
    ::ll::TypedStorage<8, 8, ulong> mCacheDurationMs;
    ::ll::TypedStorage<4, 4, int>   mFullnessFrameWindow;
    ::ll::TypedStorage<4, 4, int>   mAtlasResolution;
    ::ll::TypedStorage<1, 1, bool>  mEnableDynamicShadows;
    ::ll::TypedStorage<1, 1, bool>  mPointLightManhattanDistanceAttenuationEnabled;
    ::ll::TypedStorage<1, 1, bool>  mPointLightAttenuationWindowEnabled;
    ::ll::TypedStorage<4, 4, float> mPointLightAttenuationWindowSmoothstepMin;
    ::ll::TypedStorage<4, 4, float> mPointLightAttenuationWindowSmoothstepMax;
    ::ll::TypedStorage<4, 4, float> mPointLightAttenuationWindowYScale;
    ::ll::TypedStorage<4, 4, float> mPointLightAttenuationWindowYBias;
    // NOLINTEND
};

} // namespace mce::framebuilder
