#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ItemLockAction : uchar {
    None    = 0,
    Drop    = 1,
    Replace = 2,
    Craft   = 3,
    Remove  = 4,
};
#else // @header-generator platform
enum class ItemLockAction : uchar {};
#endif // @header-generator platform
