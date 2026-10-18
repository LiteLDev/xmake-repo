#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::HeightmapProjection {

#if defined(LL_PLAT_A) // @header-generator platform
enum Type : uchar {
    NONE             = 0,
    WORLD_SURFACE_WG = 1,
    OCEAN_FLOOR_WG   = 2,
#else // @header-generator platform
enum class Type : uchar {
    None           = 0,
    WorldSurfaceWg = 1,
    OceanFloorWg   = 2,
#endif // @header-generator platform
};

}
