#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
enum class FetchStatus : int {
    Idle       = 0,
    InProgress = 1,
    Succeeded  = 2,
    Failed     = 3,
};
#else // @header-generator platform
enum class FetchStatus : int {};
#endif // @header-generator platform

}
#endif // @header-generator platform
