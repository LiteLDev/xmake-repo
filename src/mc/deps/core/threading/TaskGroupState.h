#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TaskGroupState : int {
    Running = 0,
    Paused  = 1,
    Flush   = 2,
    Sync    = 3,
};
#endif // @header-generator platform
