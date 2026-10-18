#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSPromiseStateEnum : int {
    Pending   = 0,
    Fulfilled = 1,
    Rejected  = 2,
};
#endif // @header-generator platform
