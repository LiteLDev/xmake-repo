#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RouteFlags : uint {
    None      = 0,
    OutOfGame = 1,
    InGame    = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RouteFlags : uint {
    None      = 0,
    OutOfGame = 1,
    InGame    = 2,
};
#else // @header-generator platform
enum class RouteFlags : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

}
