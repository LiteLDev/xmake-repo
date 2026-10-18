#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BatterySaverMode : int {
    Unknown = 0,
    Off     = 1,
    On      = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    _count  = 3,
#else // @header-generator platform
    Count   = 3,
#endif // @header-generator platform
};
