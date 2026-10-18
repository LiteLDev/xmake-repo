#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FacingID : schar {
    Unknown = -1,
    Down    = 0,
    Up      = 1,
    North   = 2,
    South   = 3,
    West    = 4,
    East    = 5,
};
#endif // @header-generator platform
