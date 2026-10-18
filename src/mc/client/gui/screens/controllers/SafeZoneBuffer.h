#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SafeZoneBuffer : int {
    // bitfield representation
    Outer_Top    = 1 << 0,
    Outer_Right  = 1 << 1,
    Outer_Bottom = 1 << 2,
    Outer_Left   = 1 << 3,
    Inner_Top    = 1 << 4,
    Inner_Right  = 1 << 5,
    Inner_Bottom = 1 << 6,
    Inner_Left   = 1 << 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SafeZoneBuffer : int {
    // bitfield representation
    OuterTop    = 1 << 0,
    OuterRight  = 1 << 1,
    OuterBottom = 1 << 2,
    OuterLeft   = 1 << 3,
    InnerTop    = 1 << 4,
    InnerRight  = 1 << 5,
    InnerBottom = 1 << 6,
    InnerLeft   = 1 << 7,
};
#else // @header-generator platform
enum class SafeZoneBuffer : int {};
#endif // @header-generator platform
#endif // @header-generator platform
