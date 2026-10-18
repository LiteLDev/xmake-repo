#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScreenSpaceOccupancyEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mScreenSpaceOccupancy;
    ::ll::TypedStorage<4, 4, float> mPercentVisible;
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenSpaceOccupancyEntry {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
