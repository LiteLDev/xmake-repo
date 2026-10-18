#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SubscriptionMarketplace : int {
    AppleAppStore    = 0,
    Amazon           = 1,
    GooglePlay       = 2,
    MicrosoftStore   = 3,
    NintendoEShop    = 4,
    PlayStationStore = 5,
    Steam            = 6,
    Universal        = 7,
    Unknown          = 8,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
