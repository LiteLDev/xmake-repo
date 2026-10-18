#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PillarAxis : int {
#if defined(LL_PLAT_A) // @header-generator platform
    Y      = 0,
    X      = 1,
    Z      = 2,
    _count = 3,
#else // @header-generator platform
    Y     = 0,
    X     = 1,
    Z     = 2,
    Count = 3,
#endif // @header-generator platform
};
