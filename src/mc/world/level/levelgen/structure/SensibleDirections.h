#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum SensibleDirections : uint {
    NORTH = 0,
    EAST  = 1,
    SOUTH = 2,
    WEST  = 3,
#else // @header-generator platform
enum class SensibleDirections : int {
    North = 0,
    East  = 1,
    South = 2,
    West  = 3,
#endif // @header-generator platform
};
