#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StoneSlabType4 : int {
    MossyStoneBrick = 0,
    SmoothQuartz    = 1,
    Stone           = 2,
    CutSandstone    = 3,
    CutRedSandstone = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    _count          = 5,
#else // @header-generator platform
    Count           = 5,
#endif // @header-generator platform
};
