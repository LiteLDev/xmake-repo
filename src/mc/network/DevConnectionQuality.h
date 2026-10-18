#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DevConnectionQuality : int {
#if defined(LL_PLAT_A) // @header-generator platform
    OFF       = 0,
    NO_LIMIT  = 1,
    PHONE_4G  = 2,
    PHONE_3G  = 3,
    SLOW      = 4,
    VERY_SLOW = 5,
#else // @header-generator platform
    Off      = 0,
    NoLimit  = 1,
    Phone4g  = 2,
    Phone3g  = 3,
    Slow     = 4,
    VerySlow = 5,
#endif // @header-generator platform
};
