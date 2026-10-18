#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class MaterialRequirements : uchar {
    // bitfield representation
    None        = 0,
    AlphaTested = 1 << 0,
    Blended     = 1 << 1,
    Colored     = 1 << 2,
    SingleSided = 1 << 3,
    Count       = 1 << 4,
};
#else // @header-generator platform
enum class MaterialRequirements : uchar {};
#endif // @header-generator platform
