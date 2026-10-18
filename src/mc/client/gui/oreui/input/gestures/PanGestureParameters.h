#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct PanGestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  minTouches;
    ::ll::TypedStorage<4, 4, uint>  maxTouches;
    ::ll::TypedStorage<4, 4, float> minDistanceCm;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PanGestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  minTouches;
    ::ll::TypedStorage<4, 4, uint>  maxTouches;
    ::ll::TypedStorage<4, 4, float> minDistanceCm;
    // NOLINTEND
};
#else // @header-generator platform
struct PanGestureParameters {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
