#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AdjustmentEffect : int {
#if defined(LL_PLAT_A) // @header-generator platform
    BEARD           = 0,
    BEARD_AND_SHAVE = 1,
    BURY            = 2,
#else // @header-generator platform
    Beard         = 0,
    BeardAndShave = 1,
    Bury          = 2,
#endif // @header-generator platform
};
