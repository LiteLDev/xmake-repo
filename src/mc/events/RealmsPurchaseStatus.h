#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsPurchaseStatus : int {
    Started   = 0,
    Failed    = 1,
    Completed = 2,
};
#else // @header-generator platform
enum class RealmsPurchaseStatus : int {};
#endif // @header-generator platform
