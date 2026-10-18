#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class InitiatorCategory : int {
    Critical       = 0,
    Exclusive      = 1,
    UserImmediate  = 2,
    Automatic      = 3,
    AutoUpdatePack = 4,
    Unknown        = 5,
};
#else // @header-generator platform
enum class InitiatorCategory : int {};
#endif // @header-generator platform
