#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RouteType : int {
    OreUI    = 0,
    JSONUI   = 1,
    Redirect = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RouteType : int {
    OreUI    = 0,
    Jsonui   = 1,
    Redirect = 2,
};
#else // @header-generator platform
enum class RouteType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
