#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSModuleStatus : int {
    Unlinked        = 0,
    Linking         = 1,
    Linked          = 2,
    Evaluating      = 3,
    EvaluatingAsync = 4,
    Evaluated       = 5,
};
#endif // @header-generator platform
