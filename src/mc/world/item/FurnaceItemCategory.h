#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class FurnaceItemCategory : int {
    All            = 0,
    Food           = 1,
    Blocks         = 2,
    Items          = 3,
    Undefined      = 4,
    NUM_CATEGORIES = 5,
};
#else // @header-generator platform
enum class FurnaceItemCategory : int {};
#endif // @header-generator platform
