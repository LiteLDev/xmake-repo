#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LeverDirection : int {
    DownEastWest   = 0,
    East           = 1,
    West           = 2,
    South          = 3,
    North          = 4,
    UpNorthSouth   = 5,
    UpEastWest     = 6,
    DownNorthSouth = 7,
#if defined(LL_PLAT_A) // @header-generator platform
    _count         = 8,
#else // @header-generator platform
    Count          = 8,
#endif // @header-generator platform
};
