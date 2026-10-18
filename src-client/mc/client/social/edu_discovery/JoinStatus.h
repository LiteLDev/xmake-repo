#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

enum class JoinStatus : uchar {
    Joining          = 0,
    Error            = 1,
    ServerDiscovered = 2,
    ServerJoined     = 3,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
