#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OfferRepositoryEvent : int {
    PRODUCT_QUERY_SUCCESSFUL  = 0,
    PURCHASE_QUERY_SUCCESSFUL = 1,
    PURCHASE_QUERY_REENABLED  = 2,
    PURCHASE_ADDED            = 3,
};
