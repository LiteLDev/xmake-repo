#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PathCompletionType : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    EMPTY   = 0,
    PARTIAL = 1,
    FULL    = 2,
#else // @header-generator platform
    Empty   = 0,
    Partial = 1,
    Full    = 2,
#endif // @header-generator platform
};
