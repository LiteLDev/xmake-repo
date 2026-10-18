#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockClientPredictionOverrides : uchar {
    BlockPlayerInteract = 0,
    BlockPlayerPlacing  = 1,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count              = 7,
#else // @header-generator platform
    Count               = 7,
#endif // @header-generator platform
};
