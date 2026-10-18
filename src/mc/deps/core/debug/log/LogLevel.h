#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LogLevel : uint {
    Verbose = 0,
    Inform  = 1,
    Warning = 2,
    Error   = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    COUNT   = 4,
#else // @header-generator platform
    Count   = 4,
#endif // @header-generator platform
};
