#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DBHelpers {

enum class OperationType : uint {
    CacheRead    = 0,
    CacheWrite   = 1,
    LevelDBRead  = 2,
    LevelDBWrite = 3,
    Count        = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
