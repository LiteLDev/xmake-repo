#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RealmsStartPurchaseResult : int {
    Success                             = 0,
    OfferNotFound                       = 1,
    OfferNotAvailable_IncompleteData    = 2,
    OfferNotAvailable_AllOffersOccupied = 3,
};
