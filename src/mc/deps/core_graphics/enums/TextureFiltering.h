#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextureFiltering : uchar {
    PointFiltering          = 0,
    BilinearFiltering       = 1,
    TrilinearFiltering      = 2,
    MipMapBilinearFiltering = 3,
    TexelAA                 = 4,
    PCF                     = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TextureFiltering : uchar {
    PointFiltering          = 0,
    BilinearFiltering       = 1,
    TrilinearFiltering      = 2,
    MipMapBilinearFiltering = 3,
    TexelAA                 = 4,
    Pcf                     = 5,
};
#else // @header-generator platform
enum class TextureFiltering : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
