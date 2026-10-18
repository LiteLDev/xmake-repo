#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FishPattern : int {
#if defined(LL_PLAT_A) // @header-generator platform
    PATTERN_1 = 0,
    PATTERN_2 = 1,
    PATTERN_3 = 2,
    PATTERN_4 = 3,
    PATTERN_5 = 4,
    PATTERN_6 = 5,
    COUNT     = 6,
#else // @header-generator platform
    Pattern1 = 0,
    Pattern2 = 1,
    Pattern3 = 2,
    Pattern4 = 3,
    Pattern5 = 4,
    Pattern6 = 5,
    Count    = 6,
#endif // @header-generator platform
};
