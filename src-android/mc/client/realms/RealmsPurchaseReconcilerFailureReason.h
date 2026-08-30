#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsPurchaseReconcilerFailureReason : int {
    NOT_SPECIFIED       = 0,
    APP_STORE_NOT_READY = 1,
    PURCHASE_FAILED     = 2,
    FULFILLMENT_FAILED  = 3,
};

}
