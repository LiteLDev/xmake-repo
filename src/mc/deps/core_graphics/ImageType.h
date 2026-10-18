#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

enum class ImageType : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    Texture2D          = 0,
    Cubemap_Deprecated = 1,
    Texture3D          = 2,
    TextureCube        = 3,
#else // @header-generator platform
    Texture2D         = 0,
    CubemapDeprecated = 1,
    Texture3D         = 2,
    TextureCube       = 3,
#endif // @header-generator platform
};

}
