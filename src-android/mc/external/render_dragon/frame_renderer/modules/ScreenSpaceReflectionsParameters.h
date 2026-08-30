#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct ScreenSpaceReflectionsParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSSRContribution;
    ::ll::TypedStorage<4, 4, float> mSSRScale;
    ::ll::TypedStorage<4, 4, int>   mLinearSearchStepsCount;
    ::ll::TypedStorage<4, 4, int>   mBinarySearchStepsCount;
    ::ll::TypedStorage<4, 4, float> mRayStepLength;
    ::ll::TypedStorage<4, 4, float> mRayOffset;
    ::ll::TypedStorage<4, 4, float> mFadingPowerH;
    ::ll::TypedStorage<4, 4, float> mFadingPowerV;
    ::ll::TypedStorage<4, 4, float> mFadeDistance;
    ::ll::TypedStorage<4, 4, float> mRoughnessCutoff;
    ::ll::TypedStorage<4, 4, float> mRoughnessFadeStart;
    ::ll::TypedStorage<1, 1, bool>  mIsTemporalAccumulationEnabled;
    ::ll::TypedStorage<4, 4, float> mAllowedStandardDeviationDifference;
    ::ll::TypedStorage<4, 4, int>   mStatisticRadius;
    ::ll::TypedStorage<4, 4, float> mCurrentColorContribution;
    ::ll::TypedStorage<1, 1, bool>  mFillSmallGapsEnabled;
    ::ll::TypedStorage<4, 4, float> mThickness;
    ::ll::TypedStorage<1, 1, bool>  mUseHiZBuffer;
    ::ll::TypedStorage<4, 4, int>   mHiZLevelCount;
    ::ll::TypedStorage<4, 4, float> mHiZBufferThickness;
    ::ll::TypedStorage<4, 4, float> mScreenSpaceRayOffset;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
