#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class FetchStatus : uint {
    Idle       = 0,
    InProgress = 1,
    Succeeded  = 2,
    Failed     = 3,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
