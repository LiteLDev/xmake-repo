#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HardwareMemoryTier : uchar {
    TIER_0 = 0,
    TIER_1 = 1,
    TIER_2 = 2,
    TIER_3 = 3,
    TIER_4 = 4,
    TIER_5 = 5,
    COUNT  = 6,
};
