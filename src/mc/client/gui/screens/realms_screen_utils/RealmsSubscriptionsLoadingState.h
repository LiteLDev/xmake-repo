#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RealmsScreenUtils {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsSubscriptionsLoadingState : int {
    DoLoad  = 0,
    Loading = 1,
    Failed  = 2,
    Done    = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RealmsSubscriptionsLoadingState : int {
    DoLoad  = 0,
    Loading = 1,
    Failed  = 2,
    Done    = 3,
};
#else // @header-generator platform
enum class RealmsSubscriptionsLoadingState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
