#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class UpscalingQuality : uchar {
    Automatic     = 0,
    OneThird      = 33,
    OneHalf       = 50,
    TwoThirds     = 66,
    ThreeQuarters = 75,
    Native        = 100,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class UpscalingQuality : uchar {
    Automatic     = 0,
    OneThird      = 33,
    OneHalf       = 50,
    TwoThirds     = 66,
    ThreeQuarters = 75,
    Native        = 100,
};
#else // @header-generator platform
enum class UpscalingQuality : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
