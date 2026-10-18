#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HorseVariant : int {
#if defined(LL_PLAT_A) // @header-generator platform
    VARIANT_WHITE     = 0,
    VARIANT_CREAMY    = 1,
    VARIANT_CHESTNUT  = 2,
    VARIANT_BROWN     = 3,
    VARIANT_BLACK     = 4,
    VARIANT_GRAY      = 5,
    VARIANT_DARKBROWN = 6,
    VARIANT_COUNT     = 7,
#else // @header-generator platform
    White     = 0,
    Creamy    = 1,
    Chestnut  = 2,
    Brown     = 3,
    Black     = 4,
    Gray      = 5,
    Darkbrown = 6,
    Count     = 7,
#endif // @header-generator platform
};
