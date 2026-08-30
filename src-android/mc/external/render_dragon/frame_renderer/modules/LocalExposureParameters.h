#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct LocalExposureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mEnabled;
    ::ll::TypedStorage<4, 4, float> mContrastScale;
    ::ll::TypedStorage<4, 4, float> mDetailStrength;
    ::ll::TypedStorage<4, 4, float> mBilateralGaussianBlend;
    ::ll::TypedStorage<4, 4, int>   mBilateralGridDownsampleStages;
    ::ll::TypedStorage<4, 4, int>   mBilateralGridCellSize;
    ::ll::TypedStorage<4, 4, int>   mBilateralGridSlices;
    ::ll::TypedStorage<4, 4, float> mBilateralGridMinLogLuminance;
    ::ll::TypedStorage<4, 4, float> mBilateralGridMaxLogLuminance;
    ::ll::TypedStorage<4, 4, int>   mBilateralGridFilterRadius;
    ::ll::TypedStorage<4, 4, int>   mGaussianBlurDownsampleStages;
    ::ll::TypedStorage<4, 4, int>   mGaussianBlurFilterRadius;
    ::ll::TypedStorage<4, 4, int>   mGaussianBlurSampleSpacing;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
