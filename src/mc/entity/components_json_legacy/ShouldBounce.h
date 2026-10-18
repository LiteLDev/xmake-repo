#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ShouldBounce : uchar {
    No              = 0,
    IfInvulnerable  = 1,
    IfNoDamageDealt = 2,
};
#endif // @header-generator platform
