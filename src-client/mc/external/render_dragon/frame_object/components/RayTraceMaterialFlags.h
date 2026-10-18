#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components::details {

enum class RayTraceMaterialFlags : ushort {
    // bitfield representation
    None                             = 0,
    UseIrradianceCache               = 1 << 0,
    MotionVectors                    = 1 << 1,
    Seasons                          = 1 << 2,
    MaskedMultitexture               = 1 << 3,
    Multitexture                     = 1 << 4,
    MultiplicativeTint               = 1 << 5,
    Overlay                          = 1 << 6,
    Clouds                           = 1 << 7,
    Chunks                           = 1 << 8,
    Sun                              = 1 << 9,
    Moon                             = 1 << 10,
    VanillaRemapAlpha                = 1 << 11,
    AlphaTestThresholdHalf           = 1 << 12,
    TextureAlphaControlsVertexColour = 1 << 13,
    Glint                            = 1 << 14,
    UVBias                           = 1 << 15,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
