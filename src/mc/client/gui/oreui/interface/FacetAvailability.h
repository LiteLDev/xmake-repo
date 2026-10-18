#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FacetAvailability : int {
    InGame     = 0,
    OutOfGame  = 1,
    Everywhere = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class FacetAvailability : int {
    InGame     = 0,
    OutOfGame  = 1,
    Everywhere = 2,
};
#else // @header-generator platform
enum class FacetAvailability : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
