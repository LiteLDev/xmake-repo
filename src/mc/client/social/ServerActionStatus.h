#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_C) // @header-generator platform
enum class ServerActionStatus : int {};
#else // @header-generator platform
enum class ServerActionStatus : int {
    None                  = 0,
    Allowed               = 1,
    ServerDisabled        = 2,
    TenantServersDisabled = 3,
    Removed               = 4,
};
#endif // @header-generator platform

}
#endif // @header-generator platform
