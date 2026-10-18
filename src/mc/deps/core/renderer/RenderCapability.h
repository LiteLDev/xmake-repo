#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RenderCapability : uint {
    SuperFancyShading = 0,
    LushLeaves        = 1,
    Atmospherics      = 2,
    EdgeHighlighting  = 3,
    Bloom             = 4,
    TerrainShadows    = 5,
    SuperDuperClouds  = 6,
    LightRays         = 7,
    DepthOfField      = 8,
    SuperDuperWater   = 9,
    CloudFog          = 10,
    FoliageWind       = 11,
    SkyTexture        = 12,
    ToneMap           = 13,
#if defined(LL_PLAT_A) // @header-generator platform
    COUNT             = 14,
#else // @header-generator platform
    Count             = 14,
#endif // @header-generator platform
};
