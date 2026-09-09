#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BannerType : int {
    NOT_SPECIFIED      = 0,
    ONLY_DURING_SALE   = 1,
    WHILE_TIMER_ACTIVE = 2,
    ALWAYS_ON          = 3,
};
