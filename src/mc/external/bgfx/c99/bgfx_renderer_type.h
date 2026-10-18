#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum bgfx_renderer_type : uint {
    BGFX_RENDERER_TYPE_NOOP          = 0,
    BGFX_RENDERER_TYPE_DIRECT3D11    = 1,
    BGFX_RENDERER_TYPE_DIRECT3D12    = 2,
    BGFX_RENDERER_TYPE_DIRECT3D12RTX = 3,
    BGFX_RENDERER_TYPE_GNM           = 4,
    BGFX_RENDERER_TYPE_AGC           = 5,
    BGFX_RENDERER_TYPE_METAL         = 6,
    BGFX_RENDERER_TYPE_OPENGLES      = 7,
    BGFX_RENDERER_TYPE_OPENGL        = 8,
    BGFX_RENDERER_TYPE_VULKAN        = 9,
    BGFX_RENDERER_TYPE_VULKAN13      = 10,
    BGFX_RENDERER_TYPE_COUNT         = 11,
};
#else // @header-generator platform
enum class bgfx_renderer_type : int {};
#endif // @header-generator platform
