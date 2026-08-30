#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsPurchaseState : int {
    IDLE                                            = 0,
    PREPARING_APP_STORE                             = 1,
    CAN_BE_MEMBER_OF_MORE_REALMS_VALIDATION         = 2,
    CAN_BE_MEMBER_OF_MORE_REALMS_VALIDATION_STARTED = 3,
    REALM_NAME_VALIDATION                           = 4,
    REALM_NAME_VALIDATION_STARTED                   = 5,
    PURCHASE                                        = 6,
    PURCHASE_STARTED                                = 7,
    COMPLETED                                       = 8,
    FAILED                                          = 9,
};

}
