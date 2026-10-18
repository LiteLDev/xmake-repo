#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FuncCallType : int {
    Normal    = 0,
    New       = 1,
    SuperCtor = 2,
    Template  = 3,
};
#endif // @header-generator platform
