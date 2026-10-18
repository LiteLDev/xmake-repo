#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class JoystickState : int {
    Inactive = 0,
    Deciding = 1,
    Tapping  = 2,
    Holding  = 3,
    Move     = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class JoystickState : int {
    Inactive = 0,
    Deciding = 1,
    Tapping  = 2,
    Holding  = 3,
    Move     = 4,
};
#else // @header-generator platform
enum class JoystickState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
