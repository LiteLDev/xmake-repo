#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Facing {

enum class Axis : int {
#if defined(LL_PLAT_A) // @header-generator platform
    X      = 0,
    Y      = 1,
    Z      = 2,
    _count = 3,
#else // @header-generator platform
    X     = 0,
    Y     = 1,
    Z     = 2,
    Count = 3,
#endif // @header-generator platform
};

}
