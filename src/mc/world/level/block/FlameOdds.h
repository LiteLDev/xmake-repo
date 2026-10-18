#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FlameOdds : ushort {
#if defined(LL_PLAT_A) // @header-generator platform
    INSTANT = 60,
    EASY    = 30,
    MEDIUM  = 15,
    HARD    = 5,
    NEVER   = 0,
#else // @header-generator platform
    Instant = 60,
    Easy    = 30,
    Medium  = 15,
    Hard    = 5,
    Never   = 0,
#endif // @header-generator platform
};
