#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NodeType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    STAIRS          = -7,
    HONEYBLOCK      = -6,
    UNWALKABLE      = -5,
    HOTBLOCK        = -4,
    FENCE           = -3,
    LAVA            = -2,
    WATER           = -1,
    BLOCKED         = 0,
    BREAKABLE       = 1,
    OPEN            = 2,
    WALKABLE        = 3,
    CLIMBABLE       = 4,
    SWIMMABLE       = 5,
    BREACHABLE      = 6,
    FLYABLE         = 7,
    DOOR            = 8,
    OPEN_TYPE_COUNT = 9,
#else // @header-generator platform
    Stairs        = -7,
    Honeyblock    = -6,
    Unwalkable    = -5,
    Hotblock      = -4,
    Fence         = -3,
    Lava          = -2,
    Water         = -1,
    Blocked       = 0,
    Breakable     = 1,
    Open          = 2,
    Walkable      = 3,
    Climbable     = 4,
    Swimmable     = 5,
    Breachable    = 6,
    Flyable       = 7,
    Door          = 8,
    OpenTypeCount = 9,
#endif // @header-generator platform
};
