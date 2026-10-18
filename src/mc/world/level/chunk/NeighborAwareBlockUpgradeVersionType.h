#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NeighborAwareBlockUpgradeVersionType : int {
    None      = 0,
    WallBlock = 1,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count    = 2,
#else // @header-generator platform
    Count     = 2,
#endif // @header-generator platform
    Latest    = 1,
};
