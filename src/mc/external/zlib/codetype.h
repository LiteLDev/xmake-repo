#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class codetype : int {
    Codes = 0,
    Lens  = 1,
    Dists = 2,
};
#endif // @header-generator platform
