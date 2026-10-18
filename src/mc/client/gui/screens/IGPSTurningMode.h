#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum IGPSTurningMode : uint {
    STANDARD            = 0,
    STUTTER             = 1,
    DIRECT              = 2,
    ROLL                = 4,
    STUTTER_DIRECT      = 3,
    STUTTER_ROLL        = 5,
    DIRECT_ROLL         = 6,
    STUTTER_DIRECT_ROLL = 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class IGPSTurningMode : int {
    Standard          = 0,
    Stutter           = 1,
    Direct            = 2,
    Roll              = 4,
    StutterDirect     = 3,
    StutterRoll       = 5,
    DirectRoll        = 6,
    StutterDirectRoll = 7,
};
#else // @header-generator platform
enum class IGPSTurningMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
