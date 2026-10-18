#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StoneBrickType : int {
    Default  = 0,
    Mossy    = 1,
    Cracked  = 2,
    Chiseled = 3,
    Smooth   = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    _count   = 5,
#else // @header-generator platform
    Count    = 5,
#endif // @header-generator platform
};
