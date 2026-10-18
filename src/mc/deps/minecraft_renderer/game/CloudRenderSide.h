#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class CloudRenderSide : int {
    Any    = 0,
    Under  = 1,
    Above  = 2,
    _Count = 3,
};
#else // @header-generator platform
enum class CloudRenderSide : int {};
#endif // @header-generator platform
