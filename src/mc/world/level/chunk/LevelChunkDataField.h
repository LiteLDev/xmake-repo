#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LevelChunkDataField : int {
    BiomeState   = 0,
    BlockEntity  = 1,
    Entity       = 2,
    PendingTicks = 3,
    BorderBlocks = 4,
    RandomTicks  = 5,
#if defined(LL_PLAT_A) // @header-generator platform
    _count       = 6,
#else // @header-generator platform
    Count        = 6,
#endif // @header-generator platform
};
