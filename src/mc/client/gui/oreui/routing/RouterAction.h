#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RouterAction : int {
    Push    = 0,
    Pop     = 1,
    Replace = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RouterAction : int {
    Push    = 0,
    Pop     = 1,
    Replace = 2,
};
#else // @header-generator platform
enum class RouterAction : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
