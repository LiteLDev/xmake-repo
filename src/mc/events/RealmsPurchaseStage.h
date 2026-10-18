#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsPurchaseStage : int {
    PrePurchase = 0,
    Purchasing  = 1,
    Fulfillment = 2,
};
#else // @header-generator platform
enum class RealmsPurchaseStage : int {};
#endif // @header-generator platform
