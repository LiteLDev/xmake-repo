#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class OfferRepositoryEvent : int {
    PRODUCT_QUERY_SUCCESSFUL  = 0,
    PURCHASE_QUERY_SUCCESSFUL = 1,
    PURCHASE_QUERY_REENABLED  = 2,
    PURCHASE_ADDED            = 3,
};
#else // @header-generator platform
enum class OfferRepositoryEvent : int {};
#endif // @header-generator platform
