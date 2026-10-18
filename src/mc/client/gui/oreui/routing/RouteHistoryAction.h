#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RouteHistoryAction : int {
    Push             = 0,
    Replace          = 1,
    GoBackAndReplace = 2,
    Ignore           = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RouteHistoryAction : int {
    Push             = 0,
    Replace          = 1,
    GoBackAndReplace = 2,
    Ignore           = 3,
};
#else // @header-generator platform
enum class RouteHistoryAction : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
