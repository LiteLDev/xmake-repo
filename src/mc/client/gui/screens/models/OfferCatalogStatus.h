#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class OfferCatalogStatus : int {
    _Unknown       = 0,
    FetchingOffers = 1,
    SuccessOffers  = 2,
    FailedOffers   = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class OfferCatalogStatus : int {
    Unknown        = 0,
    FetchingOffers = 1,
    SuccessOffers  = 2,
    FailedOffers   = 3,
};
#else // @header-generator platform
enum class OfferCatalogStatus : int {};
#endif // @header-generator platform
#endif // @header-generator platform
