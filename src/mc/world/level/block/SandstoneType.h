#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SandstoneType : int {
    Default     = 0,
    Heiroglyphs = 1,
    Cut         = 2,
    Smooth      = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count      = 4,
#else // @header-generator platform
    Count       = 4,
#endif // @header-generator platform
};
