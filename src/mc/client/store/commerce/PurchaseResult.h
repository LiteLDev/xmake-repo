#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PurchaseResult : int {
    Success           = 0,
    Fail              = 1,
    PlatformStoreFail = 2,
    InProgress        = 3,
    Cancel            = 4,
};
#else // @header-generator platform
enum class PurchaseResult : int {};
#endif // @header-generator platform
