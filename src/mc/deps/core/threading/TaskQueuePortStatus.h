#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
enum class TaskQueuePortStatus : int {};
#else // @header-generator platform
enum class TaskQueuePortStatus : int {
    Active      = 0,
    Canceled    = 1,
    Terminating = 2,
    Terminated  = 3,
};
#endif // @header-generator platform
#endif // @header-generator platform
