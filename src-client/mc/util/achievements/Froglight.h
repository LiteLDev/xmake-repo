#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Achievements {

enum class Froglight : int {
    UNKNOWN     = -1,
    OCHRE       = 0,
    PEARLESCENT = 1,
    VERDANT     = 2,
    COUNT       = 3,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
