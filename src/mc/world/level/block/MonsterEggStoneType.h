#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MonsterEggStoneType : int {
    Stone              = 0,
    Cobblestone        = 1,
    StoneBrick         = 2,
    MossyStoneBrick    = 3,
    CrackedStoneBrick  = 4,
    ChiseledStoneBrick = 5,
#if defined(LL_PLAT_A) // @header-generator platform
    _count             = 6,
#else // @header-generator platform
    Count              = 6,
#endif // @header-generator platform
};
