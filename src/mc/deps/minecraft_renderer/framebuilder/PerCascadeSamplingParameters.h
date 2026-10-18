#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct PerCascadeSamplingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mBias;
    ::ll::TypedStorage<4, 4, float> mSlopeBias;
    ::ll::TypedStorage<4, 4, int>   mResolution;
    ::ll::TypedStorage<4, 4, float> mPCFWidth;
    ::ll::TypedStorage<4, 4, float> mNdLFloor;
    // NOLINTEND
};
#else // @header-generator platform
struct PerCascadeSamplingParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
