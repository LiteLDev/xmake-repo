#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ChunkTextureIdx : uchar {
    BrightnessTexture      = 0,
    EndPortalColorTexture  = 1,
    EndPortalTexture       = 2,
    FoliageTexture         = 3,
    BaseTextureCount       = 4,
    AtlasFirstLayerTexture = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ChunkTextureIdx : uchar {
    BrightnessTexture      = 0,
    EndPortalColorTexture  = 1,
    EndPortalTexture       = 2,
    FoliageTexture         = 3,
    BaseTextureCount       = 4,
    AtlasFirstLayerTexture = 4,
};
#else // @header-generator platform
enum class ChunkTextureIdx : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
