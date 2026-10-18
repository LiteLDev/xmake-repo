#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightPropagation {

enum class LightInfoFlags : uchar {
    None                     = 0,
    GroupingIgnoresIntensity = 1,
    ALL_FLAGS                = 255,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
