#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ProgressiveTakeBarLocation : int {
    Top           = 0,
    Bottom        = 1,
    Left          = 2,
    Right         = 3,
    Uninitialized = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ProgressiveTakeBarLocation : int {
    Top           = 0,
    Bottom        = 1,
    Left          = 2,
    Right         = 3,
    Uninitialized = 4,
};
#else // @header-generator platform
enum class ProgressiveTakeBarLocation : int {};
#endif // @header-generator platform
#endif // @header-generator platform
