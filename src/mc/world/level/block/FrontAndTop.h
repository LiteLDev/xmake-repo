#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FrontAndTop : uchar {
    DownEast  = 0,
    DownNorth = 1,
    DownSouth = 2,
    DownWest  = 3,
    UpEast    = 4,
    UpNorth   = 5,
    UpSouth   = 6,
    UpWest    = 7,
    WestUp    = 8,
    EastUp    = 9,
    NorthUp   = 10,
    SouthUp   = 11,
#if defined(LL_PLAT_A) // @header-generator platform
    _count    = 12,
#else // @header-generator platform
    Count     = 12,
#endif // @header-generator platform
};
