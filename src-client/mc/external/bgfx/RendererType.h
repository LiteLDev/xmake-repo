#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct RendererType {
public:
    // RendererType inner types define
    enum Enum : uint {
        Noop          = 0,
        Direct3D11    = 1,
        Direct3D12    = 2,
        Direct3D12RTX = 3,
        Gnm           = 4,
        Agc           = 5,
        Metal         = 6,
        OpenGLES      = 7,
        OpenGL        = 8,
        Vulkan        = 9,
        Vulkan13      = 10,
        Count         = 11,
    };
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
