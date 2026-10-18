#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WoodType : uchar {
    Oak     = 0,
    Spruce  = 1,
    Birch   = 2,
    Jungle  = 3,
    Acacia  = 4,
    DarkOak = 5,
#if defined(LL_PLAT_A) // @header-generator platform
    _count  = 6,
#else // @header-generator platform
    Count   = 6,
#endif // @header-generator platform
};
