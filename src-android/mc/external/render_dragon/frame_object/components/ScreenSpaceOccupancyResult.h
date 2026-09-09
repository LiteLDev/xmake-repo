#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

struct ScreenSpaceOccupancyResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mOccupancy;
    ::ll::TypedStorage<4, 4, float> mPercentageVisible;
    // NOLINTEND
};

} // namespace dragon::frameobject::components
