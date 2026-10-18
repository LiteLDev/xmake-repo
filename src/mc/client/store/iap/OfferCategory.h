#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class OfferCategory : int {
    Realms           = 0,
    Minecoin         = 1,
    Education        = 2,
    LegacyDurable    = 3,
    CoinBundle       = 4,
    PlaystationToken = 5,
    MarketplacePass  = 6,
    _Count           = 7,
    _Unknown         = 8,
};
#else // @header-generator platform
enum class OfferCategory : int {};
#endif // @header-generator platform
