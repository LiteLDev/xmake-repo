#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RenderFeature : uchar {
    TexelAA                              = 0,
    MSAA                                 = 1,
    AlphaToCoverage                      = 2,
    MipMapMaxLevel                       = 3,
    ImmutableTextures                    = 4,
    DynamicShaderLoops                   = 5,
    VertexFormatRGBA8                    = 6,
    VertexFormatR16                      = 7,
    Tearing                              = 8,
    HalfFloats                           = 9,
    VertexShaderInstancing               = 10,
    ShaderBinary                         = 11,
    sRGBTexturesAndRenderTargets         = 12,
    RGB10TextureSupported                = 13,
    R8TextureSupported                   = 14,
    LargeVertexShaderUniforms            = 15,
    PackedDepthStencilFrameBufferStorage = 16,
    StandardDerivatives                  = 17,
    DetachShadersAfterLink               = 18,
    Blit                                 = 19,
    FeatureCount                         = 20,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RenderFeature : uchar {
    TexelAA                              = 0,
    Msaa                                 = 1,
    AlphaToCoverage                      = 2,
    MipMapMaxLevel                       = 3,
    ImmutableTextures                    = 4,
    DynamicShaderLoops                   = 5,
    VertexFormatRGBA8                    = 6,
    VertexFormatR16                      = 7,
    Tearing                              = 8,
    HalfFloats                           = 9,
    VertexShaderInstancing               = 10,
    ShaderBinary                         = 11,
    SRGBTexturesAndRenderTargets         = 12,
    RGB10TextureSupported                = 13,
    R8TextureSupported                   = 14,
    LargeVertexShaderUniforms            = 15,
    PackedDepthStencilFrameBufferStorage = 16,
    StandardDerivatives                  = 17,
    DetachShadersAfterLink               = 18,
    Blit                                 = 19,
    FeatureCount                         = 20,
};
#else // @header-generator platform
enum class RenderFeature : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
