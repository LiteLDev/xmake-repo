#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HorseMarkings : int {
#if defined(LL_PLAT_A) // @header-generator platform
    MARKING_NONE          = 0,
    MARKING_WHITE_DETAILS = 1,
    MARKING_WHITE_FIELDS  = 2,
    MARKING_WHITE_DOTS    = 3,
    MARKING_BLACK_DOTS    = 4,
    MARKING_COUNT         = 5,
#else // @header-generator platform
    None         = 0,
    WhiteDetails = 1,
    WhiteFields  = 2,
    WhiteDots    = 3,
    BlackDots    = 4,
    Count        = 5,
#endif // @header-generator platform
};
