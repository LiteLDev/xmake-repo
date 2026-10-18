#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CornerShape : uchar {
    None       = 0,
    InnerLeft  = 1,
    InnerRight = 2,
    OuterLeft  = 3,
    OuterRight = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count     = 5,
#else // @header-generator platform
    Count      = 5,
#endif // @header-generator platform
};
