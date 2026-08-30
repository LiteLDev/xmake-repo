#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct ScreenSpaceOccupancyEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mScreenSpaceOccupancy;
    ::ll::TypedStorage<4, 4, float> mPercentVisible;
    // NOLINTEND
};

} // namespace dragon::texturestreaming
