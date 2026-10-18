#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ShadowQuality : uchar {
    Low    = 0,
    Medium = 1,
    High   = 2,
    Ultra  = 3,
};
#else // @header-generator platform
enum class ShadowQuality : uchar {};
#endif // @header-generator platform
