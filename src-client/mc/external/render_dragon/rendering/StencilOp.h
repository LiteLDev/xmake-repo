#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class StencilOp : int {
    Keep      = 0,
    Zero      = 1,
    Replace   = 2,
    Increment = 6,
    Decrement = 7,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
