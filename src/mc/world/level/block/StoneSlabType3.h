#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StoneSlabType3 : int {
    EndStoneBrick      = 0,
    SmoothRedSandstone = 1,
    PolishedAndesite   = 2,
    Andesite           = 3,
    Diorite            = 4,
    PolishedDiorite    = 5,
    Granite            = 6,
    PolishedGranite    = 7,
#if defined(LL_PLAT_A) // @header-generator platform
    _count             = 8,
#else // @header-generator platform
    Count              = 8,
#endif // @header-generator platform
};
