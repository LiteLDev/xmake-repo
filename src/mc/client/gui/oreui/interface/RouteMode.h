#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RouteMode : int {
    // bitfield representation
    None                = 0,
    GrabMouse           = 1 << 0,
    Overlay             = 1 << 1,
    PassInputToGameplay = 1 << 2,
    Editor              = 1 << 3,
    NoLeaveDelay        = 1 << 4,
    GameplayGridGamepad = 1 << 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RouteMode : int {
    // bitfield representation
    None                = 0,
    GrabMouse           = 1 << 0,
    Overlay             = 1 << 1,
    PassInputToGameplay = 1 << 2,
    Editor              = 1 << 3,
    NoLeaveDelay        = 1 << 4,
    GameplayGridGamepad = 1 << 5,
};
#else // @header-generator platform
enum class RouteMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
