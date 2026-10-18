#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSStrictEqModeEnum : int {
    Strict        = 0,
    SameValue     = 1,
    SameValueZero = 2,
};
#endif // @header-generator platform
