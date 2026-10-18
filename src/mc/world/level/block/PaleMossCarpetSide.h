#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PaleMossCarpetSide : int {
#if defined(LL_PLAT_A) // @header-generator platform
    None   = 0,
    Short  = 1,
    Tall   = 2,
    _count = 3,
#else // @header-generator platform
    None  = 0,
    Short = 1,
    Tall  = 2,
    Count = 3,
#endif // @header-generator platform
};
