#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TouchState : int {
    Triggered = 0,
    Pressed   = 1,
    Count     = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TouchState : int {
    Triggered = 0,
    Pressed   = 1,
    Count     = 2,
};
#else // @header-generator platform
enum class TouchState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
