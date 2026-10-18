#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Rarity : int {
    Common   = 0,
    Uncommon = 1,
    Rare     = 2,
    Epic     = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count   = 4,
#else // @header-generator platform
    Count    = 4,
#endif // @header-generator platform
};
