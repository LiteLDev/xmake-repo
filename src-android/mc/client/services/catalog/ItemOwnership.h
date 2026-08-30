#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemOwnership : uint {
    Unknown                       = 0,
    NotOwned                      = 1,
    Purchased                     = 2,
    EntitledByDevice              = 3,
    EntitledByRealmsPlus          = 4,
    EntitledByMarketplacePass     = 5,
    EntitledByGenericSubscription = 6,
};
