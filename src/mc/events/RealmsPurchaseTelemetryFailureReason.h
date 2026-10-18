#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsPurchaseTelemetryFailureReason : uchar {
    None                                              = 0,
    PurchaseCancelled                                 = 1,
    TransactionFailed                                 = 2,
    PurchaseDisabledDueToStoreVersion                 = 3,
    MemberOfTooManyRealms                             = 4,
    NetworkErrorDuringMemberOfWorldCountValidation    = 5,
    ErrorRealmNameDuringClientSideValidation          = 6,
    ErrorRealmNameDuringClubNameVetting               = 7,
    NetworkErrorDuringClubNameVetting                 = 8,
    PaymentServiceDown                                = 9,
    OfferNotAvailable                                 = 10,
    PaidOfferMissingProductInfo                       = 11,
    PaidOfferHasPurchaseHistory                       = 12,
    PaidOfferMissingProductInfoAndHasPurchaseHistory  = 13,
    TrialOfferMissingProductInfo                      = 14,
    TrialOfferHasPurchaseHistory                      = 15,
    TrialOfferMissingProductInfoAndHasPurchaseHistory = 16,
    MissingWorldDataInPurchaseFulfillment             = 17,
    EntitlementConflict                               = 18,
    Unhandled                                         = 19,
};
#else // @header-generator platform
enum class RealmsPurchaseTelemetryFailureReason : uchar {};
#endif // @header-generator platform
