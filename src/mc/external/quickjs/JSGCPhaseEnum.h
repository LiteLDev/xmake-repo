#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSGCPhaseEnum : int {
    None         = 0,
    Decref       = 1,
    RemoveCycles = 2,
};
#endif // @header-generator platform
