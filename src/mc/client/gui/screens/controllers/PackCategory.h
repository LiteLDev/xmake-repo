#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackCategory : int {
#if defined(LL_PLAT_A) // @header-generator platform
    _Unknown       = 0,
    _RealmsUnknown = 1,
    Standard       = 2,
    Premium        = 3,
    Custom         = 4,
    Subpack        = 5,
    Chemistry      = 6,
#else // @header-generator platform
    Unknown       = 0,
    RealmsUnknown = 1,
    Standard      = 2,
    Premium       = 3,
    Custom        = 4,
    Subpack       = 5,
    Chemistry     = 6,
#endif // @header-generator platform
};
