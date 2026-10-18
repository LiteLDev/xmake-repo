#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class VaultBlockState : uchar {
    Inactive  = 0,
    Active    = 1,
    Unlocking = 2,
    Ejecting  = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count    = 4,
#else // @header-generator platform
    Count     = 4,
#endif // @header-generator platform
};
