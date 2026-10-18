#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

enum class ShaderCodePlatform : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    Direct3DSm40 = 0,
    Direct3DSm50 = 1,
    Direct3DSm60 = 2,
    Direct3DSm65 = 3,
    Direct3DXb1  = 4,
    Direct3DXbx  = 5,
    Glsl120      = 6,
    Glsl430      = 7,
    Essl310      = 8,
    Metal        = 9,
    Vulkan       = 10,
    Pssl         = 11,
    Unknown      = 12,
    Count        = 12,
#endif // @header-generator platform
};

}
