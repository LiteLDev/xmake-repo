#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class AsyncStatefulFunctionState_DEPRECATED : int {
    Idle       = 0,
    InProgress = 1,
    Completed  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class AsyncStatefulFunctionState_DEPRECATED : int {
    Idle       = 0,
    InProgress = 1,
    Completed  = 2,
};
#else // @header-generator platform
enum class AsyncStatefulFunctionState_DEPRECATED : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
