#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PointLighting {

#if defined(LL_PLAT_A) // @header-generator platform
enum class LightingTier : uchar {
    BakedLight      = 0,
    AnalyticalLight = 1,
    Count           = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class LightingTier : uchar {
    BakedLight      = 0,
    AnalyticalLight = 1,
    Count           = 2,
};
#else // @header-generator platform
enum class LightingTier : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
