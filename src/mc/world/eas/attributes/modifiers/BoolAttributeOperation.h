#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

enum class BoolAttributeOperation : int {
#if defined(LL_PLAT_A) // @header-generator platform
    OVERRIDE    = 0,
    ALPHA_BLEND = 1,
    AND         = 2,
    NAND        = 3,
    OR          = 4,
    NOR         = 5,
    XOR         = 6,
    XNOR        = 7,
#else // @header-generator platform
    Override   = 0,
    AlphaBlend = 1,
    And        = 2,
    Nand       = 3,
    Or         = 4,
    Nor        = 5,
    Xor        = 6,
    Xnor       = 7,
#endif // @header-generator platform
};

}
