#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

enum class ReplacementError : int {
    SlotTypeEntityMismatch = 0,
    OutOfBounds            = 1,
    CountExceeded          = 2,
    KeepFailed             = 3,
    Unknown                = 4,
    NONE                   = 5,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
