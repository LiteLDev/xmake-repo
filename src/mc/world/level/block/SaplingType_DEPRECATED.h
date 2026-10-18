#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SaplingType_DEPRECATED : int {
    Default   = 0,
    Spruce    = 1,
    Birch     = 2,
    Jungle    = 3,
    Acacia    = 4,
    RoofedOak = 5,
    PaleOak   = 6,
#if defined(LL_PLAT_A) // @header-generator platform
    _count    = 7,
#else // @header-generator platform
    Count     = 7,
#endif // @header-generator platform
};
