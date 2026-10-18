#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TransactionStatus : int {
    PurchaseStarted                     = 0,
    PurchaseSuccess                     = 1,
    PurchaseFailed                      = 2,
    PurchaseFailed_InsufficientFunds    = 3,
    PurchaseFailed_PriceMismatch        = 4,
    PurchaseCanceled                    = 5,
    FulfillmentStarted                  = 6,
    FulfillmentSuccess                  = 7,
    FulfillmentFailed                   = 8,
    FulfillmentFailed_ProfanityName     = 9,
    CheckFulfillmentComplete            = 10,
    PurchasePending                     = 11,
    PurchaseFailed_PlatformStoreFailure = 12,
};
#else // @header-generator platform
enum class TransactionStatus : int {};
#endif // @header-generator platform
