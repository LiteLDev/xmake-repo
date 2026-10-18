#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerConnectivityTestResult : int {
#if defined(LL_PLAT_A) // @header-generator platform
    UNKNOWN = 0,
    PASSED  = 1,
    FAILED  = -1,
#else // @header-generator platform
    Unknown = 0,
    Passed  = 1,
    Failed  = -1,
#endif // @header-generator platform
};
