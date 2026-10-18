#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsOfferTier : int {
    Offer2Player  = 0,
    Offer10Player = 1,
    NotSpecified  = 2,
};
#else // @header-generator platform
enum class RealmsOfferTier : int {};
#endif // @header-generator platform
