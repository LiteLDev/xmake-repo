#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

enum class TextureSetLayerType : uchar {
    Color      = 0,
    ColorUnlit = 1,
#if defined(LL_PLAT_A) // @header-generator platform
    MER        = 2,
    MERS       = 3,
#else // @header-generator platform
    Mer        = 2,
    Mers       = 3,
#endif // @header-generator platform
    Metalness  = 4,
    Emissive   = 5,
    Roughness  = 6,
    Subsurface = 7,
    Normal     = 8,
    Heightmap  = 9,
    Count      = 10,
};

}
