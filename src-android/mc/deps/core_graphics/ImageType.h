#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

enum class ImageType : uchar {
    Texture2D          = 0,
    Cubemap_Deprecated = 1,
    Texture3D          = 2,
    TextureCube        = 3,
};

}
