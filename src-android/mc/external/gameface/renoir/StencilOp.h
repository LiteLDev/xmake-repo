#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum StencilOp : uint {
    STEO_Keep          = 0,
    STEO_Zero          = 1,
    STEO_Replace       = 2,
    STEO_Invert        = 3,
    STEO_Increment     = 4,
    STEO_Decrement     = 5,
    STEO_IncrementWrap = 6,
    STEO_DecrementWrap = 7,
};

}
