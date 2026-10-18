#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PandaVariant : int {
#if defined(LL_PLAT_A) // @header-generator platform
    DEFAULT    = 0,
    LAZY       = 1,
    WORRIED    = 2,
    PLAYFUL    = 3,
    BROWN      = 4,
    WEAK       = 5,
    AGGRESSIVE = 6,
    COUNT      = 7,
#else // @header-generator platform
    Default    = 0,
    Lazy       = 1,
    Worried    = 2,
    Playful    = 3,
    Brown      = 4,
    Weak       = 5,
    Aggressive = 6,
    Count      = 7,
#endif // @header-generator platform
};
