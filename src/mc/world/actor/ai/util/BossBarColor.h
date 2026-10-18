#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BossBarColor : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    PINK           = 0,
    BLUE           = 1,
    RED            = 2,
    GREEN          = 3,
    YELLOW         = 4,
    PURPLE         = 5,
    REBECCA_PURPLE = 6,
    WHITE          = 7,
#else // @header-generator platform
    Pink          = 0,
    Blue          = 1,
    Red           = 2,
    Green         = 3,
    Yellow        = 4,
    Purple        = 5,
    RebeccaPurple = 6,
    White         = 7,
#endif // @header-generator platform
};
