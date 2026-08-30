#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum IGPSTurningMode : uint {
    STANDARD            = 0,
    STUTTER             = 1,
    DIRECT              = 2,
    ROLL                = 4,
    STUTTER_DIRECT      = 3,
    STUTTER_ROLL        = 5,
    DIRECT_ROLL         = 6,
    STUTTER_DIRECT_ROLL = 7,
};
