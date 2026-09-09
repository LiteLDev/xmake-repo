#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

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

} // namespace mce::framebuilder
