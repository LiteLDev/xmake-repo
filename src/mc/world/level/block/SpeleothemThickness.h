#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SpeleothemThickness : int {
    Tip     = 0,
    Frustum = 1,
    Middle  = 2,
    Base    = 3,
    Merge   = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    _count  = 5,
#else // @header-generator platform
    Count   = 5,
#endif // @header-generator platform
};
