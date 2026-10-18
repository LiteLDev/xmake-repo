#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BedSleepingResult : int {
#if defined(LL_PLAT_A) // @header-generator platform
    OK                = 0,
    NOT_POSSIBLE_HERE = 1,
    NOT_POSSIBLE_NOW  = 2,
    TOO_FAR_AWAY      = 3,
    OTHER_PROBLEM     = 4,
    NOT_SAFE          = 5,
    BED_OBSTRUCTED    = 6,
#else // @header-generator platform
    Ok              = 0,
    NotPossibleHere = 1,
    NotPossibleNow  = 2,
    TooFarAway      = 3,
    OtherProblem    = 4,
    NotSafe         = 5,
    BedObstructed   = 6,
#endif // @header-generator platform
};
