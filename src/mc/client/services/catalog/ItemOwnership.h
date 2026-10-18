#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ItemOwnership : uint {
    Unknown                       = 0,
    NotOwned                      = 1,
    Purchased                     = 2,
    EntitledByDevice              = 3,
    EntitledByRealmsPlus          = 4,
    EntitledByMarketplacePass     = 5,
    EntitledByGenericSubscription = 6,
};
#else // @header-generator platform
enum class ItemOwnership : uint {};
#endif // @header-generator platform
