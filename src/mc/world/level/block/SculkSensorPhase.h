#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SculkSensorPhase : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    INACTIVE = 0,
    ACTIVE   = 1,
    COOLDOWN = 2,
    _count   = 3,
#else // @header-generator platform
    Inactive = 0,
    Active   = 1,
    Cooldown = 2,
    Count    = 3,
#endif // @header-generator platform
};
