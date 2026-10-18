#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class block_state : int {
    NeedMore      = 0,
    BlockDone     = 1,
    FinishStarted = 2,
    FinishDone    = 3,
};
#endif // @header-generator platform
