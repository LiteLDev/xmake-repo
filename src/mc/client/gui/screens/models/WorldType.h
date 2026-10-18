#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class WorldType : int {
    Local            = 0,
    Network          = 1,
    Realms           = 2,
    Progress         = 3,
    Template         = 4,
    Legacy           = 5,
    ThirdParty       = 6,
    BetaRetailLocal  = 7,
    BetaRetailLegacy = 8,
    _count           = 9,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class WorldType : int {
    Local            = 0,
    Network          = 1,
    Realms           = 2,
    Progress         = 3,
    Template         = 4,
    Legacy           = 5,
    ThirdParty       = 6,
    BetaRetailLocal  = 7,
    BetaRetailLegacy = 8,
    Count            = 9,
};
#else // @header-generator platform
enum class WorldType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
