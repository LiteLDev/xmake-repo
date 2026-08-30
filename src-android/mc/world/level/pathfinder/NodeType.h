#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NodeType : int {
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
};
