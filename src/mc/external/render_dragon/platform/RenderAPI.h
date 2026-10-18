#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

enum class RenderAPI : uchar {
    Default  = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    D3D11    = 1,
    D3D12    = 2,
    D3D12RTX = 3,
    GNM      = 4,
    AGC      = 5,
#else // @header-generator platform
    D3d11    = 1,
    D3d12    = 2,
    D3d12rtx = 3,
    Gnm      = 4,
    Agc      = 5,
#endif // @header-generator platform
    Metal    = 6,
    Noop     = 7,
    OpenGL   = 8,
    OpenGLES = 9,
    Vulkan   = 10,
    Vulkan13 = 11,
};

}
