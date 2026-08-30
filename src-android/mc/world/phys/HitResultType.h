#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HitResultType : int {
    TILE                = 0,
    ENTITY              = 1,
    ENTITY_OUT_OF_RANGE = 2,
    NO_HIT              = 3,
};
