#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScreenSpaceOccupancyResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mOccupancy;
    ::ll::TypedStorage<4, 4, float> mPercentageVisible;
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenSpaceOccupancyResult {};
#endif // @header-generator platform

} // namespace dragon::frameobject::components
