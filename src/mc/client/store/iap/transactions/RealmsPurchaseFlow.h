#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsPurchaseFlow : int {
    None                                    = 0,
    JSONScreenUserInitiatedPurchase         = 1,
    OreUIScreenUserInitiatedPurchase        = 2,
    JSONScreenManualPurchaseReconciliation  = 3,
    OreUIScreenManualPurchaseReconciliation = 4,
    AutoFulfillmentFromRepositoryUpdate     = 5,
};
#else // @header-generator platform
enum class RealmsPurchaseFlow : int {};
#endif // @header-generator platform
