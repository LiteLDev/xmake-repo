#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class BlendingBlockType : uchar {
    WATER   = 255,
    DEFAULT = 0,
    AIR     = 1,
    INVALID = 127,
#else // @header-generator platform
enum class BlendingBlockType : schar {
    Water   = -1,
    Default = 0,
    Air     = 1,
    Invalid = 127,
#endif // @header-generator platform
};
