#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SimulationType : uchar {
    Game    = 0,
    Editor  = 1,
    Test    = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    INVALID = 3,
#else // @header-generator platform
    Invalid = 3,
#endif // @header-generator platform
};
