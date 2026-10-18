#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NetworkType : int {
    Local      = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    LAN        = 1,
#else // @header-generator platform
    Lan        = 1,
#endif // @header-generator platform
    External   = 2,
    Friend     = 3,
    Realm      = 4,
    ThirdParty = 5,
    Gathering  = 6,
    Invalid    = 7,
};
