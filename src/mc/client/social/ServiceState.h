#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ServiceState : int {
    Disabled      = 0,
    Disabling     = 1,
    Enabling      = 2,
    Disconnected  = 3,
    Disconnecting = 4,
    Connecting    = 5,
    Connected     = 6,
    RetryJoin     = 7,
    Joining       = 8,
    Creating      = 9,
    Leaving       = 10,
    InGame        = 11,
};
#else // @header-generator platform
enum class ServiceState : int {};
#endif // @header-generator platform

}
