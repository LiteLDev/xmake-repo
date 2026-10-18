#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackAccessState : uchar {
    Unknown           = 0,
    Valid             = 1,
    MissingContents   = 2,
    InvalidContents   = 3,
    MissingContentKey = 4,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
