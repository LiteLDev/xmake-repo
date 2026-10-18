#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

enum class Facing : short {
#if defined(LL_PLAT_A) // @header-generator platform
    DOWN  = 0,
    UP    = 1,
    NORTH = 2,
    SOUTH = 3,
    WEST  = 4,
    EAST  = 5,
    MAX   = 6,
#else // @header-generator platform
    Down  = 0,
    Up    = 1,
    North = 2,
    South = 3,
    West  = 4,
    East  = 5,
    Max   = 6,
#endif // @header-generator platform
};

}
