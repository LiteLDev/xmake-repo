#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class MarketplacePassTabIndex : int {
    DEFAULT          = 0,
    MARKETPLACE_PLUS = 1,
    CONTENT          = 2,
    FAQ              = 3,
    BUY_NOW          = 4,
    COUNT            = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class MarketplacePassTabIndex : int {
    Default         = 0,
    MarketplacePlus = 1,
    Content         = 2,
    Faq             = 3,
    BuyNow          = 4,
    Count           = 5,
};
#else // @header-generator platform
enum class MarketplacePassTabIndex : int {};
#endif // @header-generator platform
#endif // @header-generator platform
