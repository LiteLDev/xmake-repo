#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChannelTransformAxisType : int {
    Uniform   = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    XYZ       = 1,
#else // @header-generator platform
    Xyz       = 1,
#endif // @header-generator platform
    Arbitrary = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count    = 3,
#else // @header-generator platform
    Count     = 3,
#endif // @header-generator platform
};
