#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StalkThickness : int {
#if defined(LL_PLAT_A) // @header-generator platform
    Thin   = 0,
    Thick  = 1,
    _count = 2,
#else // @header-generator platform
    Thin  = 0,
    Thick = 1,
    Count = 2,
#endif // @header-generator platform
};
