#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class ImageUsage : uchar {
    Unknown = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    sRGB    = 1,
#else // @header-generator platform
    SRGB    = 1,
#endif // @header-generator platform
    Data    = 2,
};

}
