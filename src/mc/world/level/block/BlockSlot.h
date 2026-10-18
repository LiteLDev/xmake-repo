#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockSlot : int {
    None      = -1,
    Container = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    _count    = 1,
#else // @header-generator platform
    Count     = 1,
#endif // @header-generator platform
};
