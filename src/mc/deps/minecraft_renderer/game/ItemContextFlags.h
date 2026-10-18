#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ItemContextFlags : uchar {
    // bitfield representation
    None            = 0,
    FirstPersonPass = 1 << 0,
    WorldPass       = 1 << 1,
    UIPass          = 1 << 2,
    Item2D          = 1 << 3,
    Item3D          = 1 << 4,
    InHand          = 1 << 5,
    Glint           = 1 << 6,
    MultiColorTint  = 1 << 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ItemContextFlags : uchar {
    // bitfield representation
    None            = 0,
    FirstPersonPass = 1 << 0,
    WorldPass       = 1 << 1,
    UIPass          = 1 << 2,
    Item2D          = 1 << 3,
    Item3D          = 1 << 4,
    InHand          = 1 << 5,
    Glint           = 1 << 6,
    MultiColorTint  = 1 << 7,
};
#else // @header-generator platform
enum class ItemContextFlags : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
