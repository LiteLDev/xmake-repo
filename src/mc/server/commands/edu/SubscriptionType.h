#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SubscriptionType : int {
    MarketplacePass = 0,
    RealmsCore      = 1,
    RealmsPlus      = 2,
    RealmsPro       = 3,
    Unknown         = 4,
};
#else // @header-generator platform
enum class SubscriptionType : int {};
#endif // @header-generator platform
