#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
enum class ApiId : int {};
#else // @header-generator platform
enum class ApiId : int {
    Identity             = 0,
    TaskQueuePort        = 1,
    TaskQueue            = 2,
    TaskQueuePortContext = 3,
};
#endif // @header-generator platform
#endif // @header-generator platform
