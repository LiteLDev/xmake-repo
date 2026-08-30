#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OfferCatalogStatus : int {
    _Unknown       = 0,
    FetchingOffers = 1,
    SuccessOffers  = 2,
    FailedOffers   = 3,
};
