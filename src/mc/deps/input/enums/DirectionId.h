#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DirectionId : uchar {
    Move      = 0,
    Turn      = 1,
    Scroll    = 2,
    TurnRaw   = 3,
    TurnUp    = 4,
    TurnDown  = 5,
    TurnLeft  = 6,
    TurnRight = 7,
    TurnAlt   = 8,
    Count     = 9,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class DirectionId : uchar {
    Move      = 0,
    Turn      = 1,
    Scroll    = 2,
    TurnRaw   = 3,
    TurnUp    = 4,
    TurnDown  = 5,
    TurnLeft  = 6,
    TurnRight = 7,
    TurnAlt   = 8,
    Count     = 9,
};
#else // @header-generator platform
enum class DirectionId : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
