#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BurnOdds : ushort {
#if defined(LL_PLAT_A) // @header-generator platform
    INSTANT = 100,
    EASY    = 60,
    MEDIUM  = 20,
    HARD    = 5,
    NEVER   = 0,
#else // @header-generator platform
    Instant = 100,
    Easy    = 60,
    Medium  = 20,
    Hard    = 5,
    Never   = 0,
#endif // @header-generator platform
};
