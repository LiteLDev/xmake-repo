#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CanClimbIntoNode : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    CLIMBABLE    = 1,
    NONCLIMBABLE = 0,
#else // @header-generator platform
    Climbable    = 1,
    Nonclimbable = 0,
#endif // @header-generator platform
};
