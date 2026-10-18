#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackOrigin : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    _Unknown         = 0,
    _RealmsUnknown   = 1,
#else // @header-generator platform
    Unknown          = 0,
    RealmsUnknown    = 1,
#endif // @header-generator platform
    Package          = 2,
    Treatment        = 3,
    Dev              = 4,
    World            = 5,
    User             = 6,
    TempCache        = 7,
    PremiumCache     = 8,
    PremiumTempCache = 9,
    RealmsService    = 10,
    Test             = 11,
    System           = 12,
};
