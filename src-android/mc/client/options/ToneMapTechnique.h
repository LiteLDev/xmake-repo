#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ToneMapTechnique : int {
    None             = 0,
    Logarithmic      = 1,
    Exponential      = 2,
    DragoLogarithmic = 3,
    Reinhard         = 4,
    ReinhardModified = 5,
    ACES             = 6,
    HableFilmic      = 7,
    Hable            = 8,
    NUM_TECHNIQUES   = 9,
};
