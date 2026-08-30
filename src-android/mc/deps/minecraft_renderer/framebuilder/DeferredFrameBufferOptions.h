#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

enum class DeferredFrameBufferOptions : int {
    Off                   = 0,
    Albedo                = 1,
    VanillaAmbient        = 2,
    BlockLightColor       = 3,
    Depth                 = 4,
    HiZ                   = 5,
    Emissive              = 6,
    Metalness             = 7,
    Subsurface            = 8,
    Normals               = 9,
    Roughness             = 10,
    Velocity              = 11,
    Luminance             = 12,
    SSRColorBuffer        = 13,
    DepthWithWaterBuffer  = 14,
    CascadedShadowTexture = 15,
    BiomeBlendingTexture  = 16,
    PointLightShadowAtlas = 17,
    VoxelBuffer           = 18,
};

}
