#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HatchLevel : uint {
    NoCracks   = 0,
    Cracked    = 1,
    MaxCracked = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    _count     = 3,
#else // @header-generator platform
    Count      = 3,
#endif // @header-generator platform
};
