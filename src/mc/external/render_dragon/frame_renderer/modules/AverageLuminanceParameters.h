#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

#if defined(LL_PLAT_A) // @header-generator platform
struct AverageLuminanceParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMinLogLuminance;
    ::ll::TypedStorage<4, 4, float> mLogLuminanceRange;
    ::ll::TypedStorage<4, 4, float> mLowPercent;
    ::ll::TypedStorage<4, 4, float> mHighPercent;
    ::ll::TypedStorage<4, 4, float> mAdaptiveCoeff;
    ::ll::TypedStorage<4, 4, float> mLightAdaptation;
    ::ll::TypedStorage<4, 4, float> mDarkAdaptation;
    ::ll::TypedStorage<4, 4, float> mCenterWeight;
    ::ll::TypedStorage<1, 1, bool>  mEnablePreExposure;
    // NOLINTEND
};
#else // @header-generator platform
struct AverageLuminanceParameters {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules
