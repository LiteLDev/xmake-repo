#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PortalAxis : int {
    Unknown = 0,
    X       = 1,
    Z       = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    _count  = 3,
#else // @header-generator platform
    Count   = 3,
#endif // @header-generator platform
};
