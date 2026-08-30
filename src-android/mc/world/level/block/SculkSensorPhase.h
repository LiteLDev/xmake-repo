#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SculkSensorPhase : uchar {
    INACTIVE = 0,
    ACTIVE   = 1,
    COOLDOWN = 2,
    _count   = 3,
};
