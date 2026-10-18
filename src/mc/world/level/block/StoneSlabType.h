#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StoneSlabType : int {
    SmoothStone = 0,
    Sandstone   = 1,
    Wood        = 2,
    Cobblestone = 3,
    Brick       = 4,
    StoneBrick  = 5,
    Quartz      = 6,
    NetherBrick = 7,
#if defined(LL_PLAT_A) // @header-generator platform
    _count      = 8,
#else // @header-generator platform
    Count       = 8,
#endif // @header-generator platform
};
