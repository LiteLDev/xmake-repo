#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

namespace mce::framebuilder {

struct SkyWeatherParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>         mSkyTransitionSpeed;
    ::ll::TypedStorage<4, 4, float>         mDirectionalLightStrength;
    ::ll::TypedStorage<4, 4, float>         mCloudRenderDistanceScale;
    ::ll::TypedStorage<4, 16, ::mce::Color> mRainSkyColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mBaseRainCloudColor;
    ::ll::TypedStorage<4, 4, float>         mRainCloudColorContribution;
    ::ll::TypedStorage<4, 16, ::mce::Color> mBaseThunderSkyColor;
    ::ll::TypedStorage<4, 4, float>         mThunderSkyColorContribution;
    ::ll::TypedStorage<4, 16, ::mce::Color> mBaseThunderCloudColor;
    ::ll::TypedStorage<4, 4, float>         mThunderCloudColorContribution;
    ::ll::TypedStorage<4, 16, ::mce::Color> mLightningFlashColor;
    ::ll::TypedStorage<4, 4, float>         mLightningFlashColorContribution;
    // NOLINTEND
};

} // namespace mce::framebuilder
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
