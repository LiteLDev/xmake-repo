#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct WaterSurfaceParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mEnabled;
    ::ll::TypedStorage<4, 4, float> mWaveFrequency;
    ::ll::TypedStorage<4, 4, uint>  mOctaves;
    ::ll::TypedStorage<4, 4, float> mDepth;
    ::ll::TypedStorage<4, 4, float> mStartingSpeed;
    ::ll::TypedStorage<4, 4, float> mPull;
    ::ll::TypedStorage<4, 4, float> mWeightMix;
    ::ll::TypedStorage<4, 4, float> mFrequencyScaling;
    ::ll::TypedStorage<4, 4, float> mSpeedScaling;
    ::ll::TypedStorage<4, 4, float> mRotationOffset;
    ::ll::TypedStorage<4, 4, float> mWaveExponent;
    // NOLINTEND
};
#else // @header-generator platform
struct WaterSurfaceParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
