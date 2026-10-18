#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class QuadUVRotation : uchar {
    ZERO       = 0,
    CW_90_DEG  = 1,
    CW_180_DEG = 2,
    CW_270_DEG = 3,
    _COUNT     = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class QuadUVRotation : uchar {
    Zero     = 0,
    Cw90Deg  = 1,
    Cw180Deg = 2,
    Cw270Deg = 3,
    Count    = 4,
};
#else // @header-generator platform
enum class QuadUVRotation : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
