#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SprintTriggerSystem {

enum class IntentSprintType : int {
    SprintInput     = 0,
    SprintDoubleTap = 1,
    DoubleTapReset  = 2,
    NoIntent        = 3,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
