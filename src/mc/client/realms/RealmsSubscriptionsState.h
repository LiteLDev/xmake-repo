#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsSubscriptionsState : int {
    IDLE    = 0,
    LOADING = 1,
    FAILED  = 2,
    DONE    = 3,
};
#else // @header-generator platform
enum class RealmsSubscriptionsState : int {};
#endif // @header-generator platform

}
