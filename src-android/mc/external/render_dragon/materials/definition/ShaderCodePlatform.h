#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

enum class ShaderCodePlatform : uchar {
    Direct3D_SM40 = 0,
    Direct3D_SM50 = 1,
    Direct3D_SM60 = 2,
    Direct3D_SM65 = 3,
    Direct3D_XB1  = 4,
    Direct3D_XBX  = 5,
    GLSL_120      = 6,
    GLSL_430      = 7,
    ESSL_310      = 8,
    Metal         = 9,
    Vulkan        = 10,
    PSSL          = 11,
    Unknown       = 12,
    Count         = 12,
};

}
