#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TallGrassType : int {
    Default = 0,
    Tall    = 1,
    Fern    = 2,
    Snow    = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count  = 4,
#else // @header-generator platform
    Count   = 4,
#endif // @header-generator platform
};
