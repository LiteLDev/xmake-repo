#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HitResultType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    TILE                = 0,
    ENTITY              = 1,
    ENTITY_OUT_OF_RANGE = 2,
    NO_HIT              = 3,
#else // @header-generator platform
    Tile             = 0,
    Entity           = 1,
    EntityOutOfRange = 2,
    NoHit            = 3,
#endif // @header-generator platform
};
