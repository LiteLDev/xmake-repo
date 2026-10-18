#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ClientGameSetupResult : int {
    Success          = 0,
    Cancelled        = 1,
    Failed           = 2,
    NoValidAuth      = 3,
    NotAuthenticated = 4,
};
#else // @header-generator platform
enum class ClientGameSetupResult : int {};
#endif // @header-generator platform
