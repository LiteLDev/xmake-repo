#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Facing {

enum class Rotation : int {
#if defined(LL_PLAT_A) // @header-generator platform
    NONE   = 0,
    CCW    = 1,
    OPP    = 2,
    CW     = 3,
    _count = 4,
#else // @header-generator platform
    None  = 0,
    Ccw   = 1,
    Opp   = 2,
    Cw    = 3,
    Count = 4,
#endif // @header-generator platform
};

}
