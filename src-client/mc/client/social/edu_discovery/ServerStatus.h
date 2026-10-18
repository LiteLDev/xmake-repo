#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

enum class ServerStatus : uchar {
    None             = 0,
    Initializing     = 1,
    FetchingJoinCode = 2,
    Invalid          = 3,
    Running          = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
