#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StoneSlabType2 : int {
    RedSandstone     = 0,
    Purpur           = 1,
    PrismarineRough  = 2,
    PrismarineDark   = 3,
    PrismarineBrick  = 4,
    MossyCobblestone = 5,
    SmoothSandstone  = 6,
    RedNetherBrick   = 7,
#if defined(LL_PLAT_A) // @header-generator platform
    _count           = 8,
#else // @header-generator platform
    Count            = 8,
#endif // @header-generator platform
};
