#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TrapDoorUtils {

enum TrapDoorDir : uchar {
    DIR_EAST  = 0,
    DIR_WEST  = 1,
    DIR_SOUTH = 2,
    DIR_NORTH = 3,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
