#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class AnimationTickResult : int {
    Running           = 0,
    NewAnimationAdded = 1,
    FinishedRunning   = 2,
    Finished_Refresh  = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class AnimationTickResult : int {
    Running           = 0,
    NewAnimationAdded = 1,
    FinishedRunning   = 2,
    FinishedRefresh   = 3,
};
#else // @header-generator platform
enum class AnimationTickResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform
