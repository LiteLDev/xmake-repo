#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

enum class BlendMode : int {
    None               = 0,
    Replace            = 1,
    AlphaBlend         = 2,
    ColorBlendAlphaAdd = 3,
    PreMultiplied      = 4,
    InvertColor        = 5,
    Additive           = 6,
    AdditiveAlpha      = 7,
    Multiply           = 8,
    MultiplyBoth       = 9,
    InverseSrcAlpha    = 10,
    SrcAlpha           = 11,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
