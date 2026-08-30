#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DevConnectionQuality : int {
    OFF       = 0,
    NO_LIMIT  = 1,
    PHONE_4G  = 2,
    PHONE_3G  = 3,
    SLOW      = 4,
    VERY_SLOW = 5,
};
