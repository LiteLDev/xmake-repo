#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MoonPhases : int {
    FULL_MOON       = 0,
    WANING_GIBBOUS  = 1,
    FIRST_QUARTER   = 2,
    WANING_CRESCENT = 3,
    NEW_MOON        = 4,
    WAXING_CRESCENT = 5,
    LAST_QUARTER    = 6,
    WAXING_GIBBOUS  = 7,
    COUNT           = 8,
};
