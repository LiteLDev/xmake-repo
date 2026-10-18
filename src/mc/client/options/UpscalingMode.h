#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class UpscalingMode : uchar {
    TAAU     = 0,
    Bilinear = 1,
};
#else // @header-generator platform
enum class UpscalingMode : uchar {};
#endif // @header-generator platform
