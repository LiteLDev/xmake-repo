#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
enum class Category : int {
    Menu      = 0,
    Overworld = 1,
    Nether    = 2,
    End       = 3,
    Endboss   = 4,
    Credits   = 5,
    Custom    = 6,
};
#else // @header-generator platform
enum class Category : int {};
#endif // @header-generator platform
#endif // @header-generator platform
