#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RandomSwimUtility {

struct SwimHeightBounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mGroundLevelY;
    ::ll::TypedStorage<4, 4, float> mWaterSurfaceY;
    ::ll::TypedStorage<4, 4, float> mMinSwimY;
    ::ll::TypedStorage<4, 4, float> mMaxSwimY;
    // NOLINTEND
};

} // namespace RandomSwimUtility
