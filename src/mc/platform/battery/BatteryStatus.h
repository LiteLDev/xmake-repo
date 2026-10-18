#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BatteryStatus : int {
    Unknown     = 0,
    Discharging = 1,
    Charging    = 2,
    Full        = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count      = 4,
#else // @header-generator platform
    Count       = 4,
#endif // @header-generator platform
};
