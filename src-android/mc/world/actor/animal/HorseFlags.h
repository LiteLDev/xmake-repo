#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HorseFlags : int {
    // bitfield representation
    FLAG_SADDLE     = 1 << 2,
    FLAG_EATING     = 1 << 5,
    FLAG_STANDING   = 1 << 6,
    FLAG_OPEN_MOUTH = 1 << 7,
};
