#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FlowerType : int {
    Poppy           = 0,
    Orchid          = 1,
    Allium          = 2,
    Houstonia       = 3,
    TulipRed        = 4,
    TulipOrange     = 5,
    TulipWhite      = 6,
    TulipPink       = 7,
    Oxeye           = 8,
    Cornflower      = 9,
    LilyOfTheValley = 10,
#if defined(LL_PLAT_A) // @header-generator platform
    _count          = 11,
#else // @header-generator platform
    Count           = 11,
#endif // @header-generator platform
};
