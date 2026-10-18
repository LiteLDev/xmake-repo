#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NeighborDirection : int {
    Down              = 0,
    Up                = 1,
    North             = 2,
    NorthUpDiagonal   = 3,
    NorthDownDiagonal = 4,
    South             = 5,
    SouthUpDiagonal   = 6,
    SouthDownDiagonal = 7,
    West              = 8,
    WestUpDiagonal    = 9,
    WestDownDiagonal  = 10,
    East              = 11,
    EastUpDiagonal    = 12,
    EastDownDiagonal  = 13,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count            = 14,
#else // @header-generator platform
    Count             = 14,
#endif // @header-generator platform
};
