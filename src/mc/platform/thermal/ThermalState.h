#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ThermalState : int {
    Unknown  = 0,
    Normal   = 1,
    Moderate = 2,
    Serious  = 3,
    Critical = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    _count   = 5,
#else // @header-generator platform
    Count    = 5,
#endif // @header-generator platform
};
