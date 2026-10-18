#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class TextureChannelName : int {
    Red       = 0,
    Green     = 1,
    Blue      = 2,
    Alpha     = 3,
    Metalness = 0,
    Emissive  = 1,
    Roughness = 2,
    Normal    = 0,
    INVALID   = 255,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
