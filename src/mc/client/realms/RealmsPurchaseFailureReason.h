#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsPurchaseFailureReason : int {
    NOT_SPECIFIED                           = 0,
    NO_ACCESS                               = 1,
    MEMBER_OF_TOO_MANY_REALMS               = 2,
    INVALID_REALM_NAME                      = 3,
    FAILED_CLUB_NAME_VALIDATION             = 4,
    OFFER_NOT_FOUND                         = 5,
    OFFER_NOT_AVAILABLE_INCOMPLETE_DATA     = 6,
    OFFER_NOT_AVAILABLE_ALL_OFFERS_OCCUPIED = 7,
    APP_STORE_NOT_READY                     = 8,
    CHECK_REALMS_PAYMENT_SERVICE_FAILED     = 9,
    PURCHASE_FAILED                         = 10,
    FULFILLMENT_FAILED                      = 11,
};
#else // @header-generator platform
enum class RealmsPurchaseFailureReason : int {};
#endif // @header-generator platform

}
