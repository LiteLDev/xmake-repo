#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsPurchaseReconcilerFailureReason : int {
    NOT_SPECIFIED       = 0,
    APP_STORE_NOT_READY = 1,
    PURCHASE_FAILED     = 2,
    FULFILLMENT_FAILED  = 3,
};
#else // @header-generator platform
enum class RealmsPurchaseReconcilerFailureReason : int {};
#endif // @header-generator platform

}
