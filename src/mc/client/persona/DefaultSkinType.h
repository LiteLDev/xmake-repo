#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
enum class DefaultSkinType : uchar {
    DEFAULT_CAST_START = 0,
    Alex               = 0,
    Ari                = 1,
    Efe                = 2,
    Kai                = 3,
    Makena             = 4,
    Noor               = 5,
    Steve              = 6,
    Sunny              = 7,
    Zuri               = 8,
    DEFAULT_CAST_END   = 9,
    Custom             = 9,
    CustomSlim         = 10,
    Dummy              = 11,
};
#else // @header-generator platform
enum class DefaultSkinType : uchar {};
#endif // @header-generator platform

}
