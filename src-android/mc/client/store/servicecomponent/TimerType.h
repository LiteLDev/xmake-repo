#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TimerType : int {
    NOT_SPECIFIED         = 0,
    DEFAULT_SALE_BEHAVIOR = 1,
    SALE_PROMOTION_END    = 2,
    SPECIFIED_DATE        = 3,
};
