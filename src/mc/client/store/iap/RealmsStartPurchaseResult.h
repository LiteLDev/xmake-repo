#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsStartPurchaseResult : int {
    Success                             = 0,
    OfferNotFound                       = 1,
    OfferNotAvailable_IncompleteData    = 2,
    OfferNotAvailable_AllOffersOccupied = 3,
};
#else // @header-generator platform
enum class RealmsStartPurchaseResult : int {};
#endif // @header-generator platform
