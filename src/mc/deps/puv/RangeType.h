#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

enum class RangeType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    open       = 0,
    closed     = 1,
    left_open  = 2,
    right_open = 3,
#else // @header-generator platform
    Open      = 0,
    Closed    = 1,
    LeftOpen  = 2,
    RightOpen = 3,
#endif // @header-generator platform
};

}
