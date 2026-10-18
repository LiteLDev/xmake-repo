#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AnvilDamage : int {
    Undamaged       = 0,
    SlightlyDamaged = 1,
    VeryDamaged     = 2,
    Broken          = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count          = 4,
#else // @header-generator platform
    Count           = 4,
#endif // @header-generator platform
};
