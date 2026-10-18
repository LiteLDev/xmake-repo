#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HardwareMemoryTier : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    TIER_0 = 0,
    TIER_1 = 1,
    TIER_2 = 2,
    TIER_3 = 3,
    TIER_4 = 4,
    TIER_5 = 5,
    COUNT  = 6,
#else // @header-generator platform
    Tier0 = 0,
    Tier1 = 1,
    Tier2 = 2,
    Tier3 = 3,
    Tier4 = 4,
    Tier5 = 5,
    Count = 6,
#endif // @header-generator platform
};
