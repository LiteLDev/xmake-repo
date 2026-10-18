#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TouchPadTouchPointState : int {
    Start = 0,
    Move  = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TouchPadTouchPointState : int {
    Start = 0,
    Move  = 1,
};
#else // @header-generator platform
enum class TouchPadTouchPointState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
