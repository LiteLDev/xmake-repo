#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PurchaseEnabledScreenController {
public:
    // PurchaseEnabledScreenController inner types declare
    // clang-format off
    class PurchaseEnabledEntitlementChangeListener;
    // clang-format on

    // PurchaseEnabledScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class PurchaseStatus : uint {
        NoPurchaseAttemptActive     = 0,
        CoinPurchaseInProgress      = 1,
        DownloadInProgress          = 2,
        InsufficientFundsInProgress = 3,
        PurchaseAttemptFinished     = 4,
        PurchaseInProgress          = 5,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class PurchaseStatus : uint {
        NoPurchaseAttemptActive     = 0,
        CoinPurchaseInProgress      = 1,
        DownloadInProgress          = 2,
        InsufficientFundsInProgress = 3,
        PurchaseAttemptFinished     = 4,
        PurchaseInProgress          = 5,
    };
#else // @header-generator platform
    enum class PurchaseStatus : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

    class PurchaseEnabledEntitlementChangeListener {};
};
