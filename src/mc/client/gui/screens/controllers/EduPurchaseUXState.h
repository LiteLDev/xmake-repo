#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class EduPurchaseUXState : int {
    None               = 0,
    AskingToBuy        = 1,
    ConfirmingPurchase = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class EduPurchaseUXState : int {
    None               = 0,
    AskingToBuy        = 1,
    ConfirmingPurchase = 2,
};
#else // @header-generator platform
enum class EduPurchaseUXState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
