#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MoonPhases : int {
#if defined(LL_PLAT_A) // @header-generator platform
    FULL_MOON       = 0,
    WANING_GIBBOUS  = 1,
    FIRST_QUARTER   = 2,
    WANING_CRESCENT = 3,
    NEW_MOON        = 4,
    WAXING_CRESCENT = 5,
    LAST_QUARTER    = 6,
    WAXING_GIBBOUS  = 7,
    COUNT           = 8,
#else // @header-generator platform
    FullMoon       = 0,
    WaningGibbous  = 1,
    FirstQuarter   = 2,
    WaningCrescent = 3,
    NewMoon        = 4,
    WaxingCrescent = 5,
    LastQuarter    = 6,
    WaxingGibbous  = 7,
    Count          = 8,
#endif // @header-generator platform
};
