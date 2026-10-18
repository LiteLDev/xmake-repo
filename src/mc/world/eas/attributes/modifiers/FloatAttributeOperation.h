#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

enum class FloatAttributeOperation : int {
#if defined(LL_PLAT_A) // @header-generator platform
    OVERRIDE    = 0,
    ALPHA_BLEND = 1,
    ADD         = 2,
    SUBTRACT    = 3,
    MULTIPLY    = 4,
    MINIMUM     = 5,
    MAXIMUM     = 6,
#else // @header-generator platform
    Override   = 0,
    AlphaBlend = 1,
    Add        = 2,
    Subtract   = 3,
    Multiply   = 4,
    Minimum    = 5,
    Maximum    = 6,
#endif // @header-generator platform
};

}
