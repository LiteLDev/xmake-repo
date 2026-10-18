#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TerrainLayerLOD : uchar {
    High  = 0,
    Low   = 1,
    Count = 2,
};
#else // @header-generator platform
enum class TerrainLayerLOD : uchar {};
#endif // @header-generator platform
