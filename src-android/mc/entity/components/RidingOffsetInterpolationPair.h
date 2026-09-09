#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RidingOffsetInterpolationPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mCurrentOffset;
    ::ll::TypedStorage<4, 4, float> mPreviousOffset;
    // NOLINTEND
};
