#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TouchTurnState : int {
    Inactive = 0,
    Deciding = 1,
    Turn     = 2,
    Hold     = 3,
    Tap      = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TouchTurnState : int {
    Inactive = 0,
    Deciding = 1,
    Turn     = 2,
    Hold     = 3,
    Tap      = 4,
};
#else // @header-generator platform
enum class TouchTurnState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
