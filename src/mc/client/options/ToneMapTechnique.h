#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
enum class ToneMapTechnique : int {};
#endif // @header-generator platform
