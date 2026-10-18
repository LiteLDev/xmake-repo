#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CoralColor : int {
    Blue   = 0,
    Pink   = 1,
    Purple = 2,
    Red    = 3,
    Yellow = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    _count = 5,
#else // @header-generator platform
    Count  = 5,
#endif // @header-generator platform
};
