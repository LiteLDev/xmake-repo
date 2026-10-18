#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
enum class Define : uchar {
    AlphaTest          = 0,
    ColorSecondTexture = 1,
    ColorBased         = 2,
    DisableTinting     = 3,
    Fancy              = 4,
    EnableFog          = 5,
    EnableLight        = 6,
    Glint              = 7,
    ItemInHand         = 8,
    MultiColorTint     = 9,
    MultiplicativeTint = 10,
    NoTexture          = 11,
    TintedAlphaTest    = 12,
    UIEntity           = 13,
    UseColorMask       = 14,
    UseEmissive        = 15,
    UseMultitexture    = 16,
    MaskedMultitexture = 17,
    UseOnlyEmissive    = 18,
    UseOverlay         = 19,
    UseSkinning        = 20,
    UseUVAnim          = 21,
};
#else // @header-generator platform
enum class Define : uchar {};
#endif // @header-generator platform

}
