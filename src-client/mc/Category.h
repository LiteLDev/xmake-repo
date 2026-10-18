#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Category : int {
    MENU      = 0,
    OVERWORLD = 1,
    NETHER    = 2,
    END       = 3,
    ENDBOSS   = 4,
    CREDITS   = 5,
    CUSTOM    = 6,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
