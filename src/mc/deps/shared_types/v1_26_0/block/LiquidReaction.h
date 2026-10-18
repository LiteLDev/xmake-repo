#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_0 {

enum class LiquidReaction : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    BROKEN     = 0,
    POPPED     = 1,
    BLOCKING   = 2,
    NOREACTION = 3,
#else // @header-generator platform
    Broken     = 0,
    Popped     = 1,
    Blocking   = 2,
    Noreaction = 3,
#endif // @header-generator platform
};

}
