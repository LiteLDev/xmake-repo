#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class BakedBlockLightType : int {
    None   = 0,
    Flat   = 1,
    Smooth = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class BakedBlockLightType : int {
    None   = 0,
    Flat   = 1,
    Smooth = 2,
};
#else // @header-generator platform
enum class BakedBlockLightType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
