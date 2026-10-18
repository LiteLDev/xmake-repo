#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PotentSulfurState : int {
    Dry        = 0,
    Wet        = 1,
    Dormant    = 2,
    Erupting   = 3,
    Continuous = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    _count     = 5,
#else // @header-generator platform
    Count      = 5,
#endif // @header-generator platform
};
