#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CauldronLiquidType : int {
    Water      = 0,
    Lava       = 1,
    PowderSnow = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    _count     = 3,
#else // @header-generator platform
    Count      = 3,
#endif // @header-generator platform
};
