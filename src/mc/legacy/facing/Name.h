#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Facing {

#if defined(LL_PLAT_A) // @header-generator platform
enum Name : uchar {
    DOWN            = 0,
    UP              = 1,
    NORTH           = 2,
    SOUTH           = 3,
    WEST            = 4,
    EAST            = 5,
    MAX             = 6,
    NOT_DEFINED     = 6,
    NUM_CULLING_IDS = 7,
#else // @header-generator platform
enum class Name : uchar {
    Down          = 0,
    Up            = 1,
    North         = 2,
    South         = 3,
    West          = 4,
    East          = 5,
    Max           = 6,
    NotDefined    = 6,
    NumCullingIds = 7,
#endif // @header-generator platform
};

}
