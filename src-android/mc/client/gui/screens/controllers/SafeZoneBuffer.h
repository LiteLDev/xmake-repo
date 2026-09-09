#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SafeZoneBuffer : int {
    // bitfield representation
    Outer_Top    = 1 << 0,
    Outer_Right  = 1 << 1,
    Outer_Bottom = 1 << 2,
    Outer_Left   = 1 << 3,
    Inner_Top    = 1 << 4,
    Inner_Right  = 1 << 5,
    Inner_Bottom = 1 << 6,
    Inner_Left   = 1 << 7,
};
