#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PredictedMovementValues {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mUseAggressiveTickInterval;
    ::ll::TypedStorage<8, 8, long> mInterpolationWindowSizeInTicks;
    // NOLINTEND
};
