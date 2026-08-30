#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsPurchaseReconcilerState : int {
    IDLE                                    = 0,
    PREPARING_APP_STORE                     = 1,
    APP_STORE_READY                         = 2,
    BLOCKED_BY_PRIOR_PURCHASE_RENEW         = 3,
    BLOCKED_BY_PRIOR_PURCHASE_CREATE        = 4,
    BLOCKED_BY_PRIOR_PURCHASE_MISMATCH_ID   = 5,
    BLOCKED_BY_PRIOR_PURCHASE_MISMATCH_XUID = 6,
    BLOCKED_BY_PRIOR_PURCHASE_INFORMATIVE   = 7,
    BLOCKED_BY_PRIOR_PURCHASE_NO_PAYLOAD    = 8,
    RECONCILIATION_STARTED                  = 9,
    COMPLETED                               = 10,
    FAILED                                  = 11,
};

}
