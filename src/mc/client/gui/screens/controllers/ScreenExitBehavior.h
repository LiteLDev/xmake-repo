#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ScreenExitBehavior : int {
    LeaveScreen     = 0,
    ExitGame        = 1,
    GoToStartScreen = 2,
    DoNothing       = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ScreenExitBehavior : int {
    LeaveScreen     = 0,
    ExitGame        = 1,
    GoToStartScreen = 2,
    DoNothing       = 3,
};
#else // @header-generator platform
enum class ScreenExitBehavior : int {};
#endif // @header-generator platform
#endif // @header-generator platform
