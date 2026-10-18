#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class InHandUpdateType : uchar {
    NONE   = 0,
    UPDATE = 1,
    SWAP   = 2,
#else // @header-generator platform
enum class InHandUpdateType : schar {
    None   = 0,
    Update = 1,
    Swap   = 2,
#endif // @header-generator platform
};
