#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemSpecialLocation : int {
    Invalid         = -1,
    Destroy         = 0,
    PlayerPosExact  = 1,
    PlayerPosNearby = 2,
    Consume         = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count          = 4,
#else // @header-generator platform
    Count           = 4,
#endif // @header-generator platform
};
