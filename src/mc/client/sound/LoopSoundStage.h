#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LoopSoundStage : int {
    Stopped    = 0,
    Start      = 1,
    Play       = 2,
    Transition = 3,
    Terminate  = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class LoopSoundStage : int {
    Stopped    = 0,
    Start      = 1,
    Play       = 2,
    Transition = 3,
    Terminate  = 4,
};
#else // @header-generator platform
enum class LoopSoundStage : int {};
#endif // @header-generator platform
#endif // @header-generator platform
