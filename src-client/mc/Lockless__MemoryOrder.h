#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Lockless {

enum class MemoryOrder : int {
    Relaxed = 0,
    Acquire = 1,
    Release = 2,
    AcqRel  = 3,
    SeqCst  = 4,
    Sync    = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
