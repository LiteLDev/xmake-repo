#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TorchFacing : int {
    Unknown = 0,
    West    = 1,
    East    = 2,
    North   = 3,
    South   = 4,
    Top     = 5,
#if defined(LL_PLAT_A) // @header-generator platform
    _count  = 6,
#else // @header-generator platform
    Count   = 6,
#endif // @header-generator platform
};
