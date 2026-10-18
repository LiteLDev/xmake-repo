#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockGeoType {

#if defined(LL_PLAT_A) // @header-generator platform
enum class GeoType : uchar {
    Terrain = 0,
    Logs    = 1,
    Leaves  = 2,
    Water   = 3,
    Lava    = 4,
    Glass   = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class GeoType : uchar {
    Terrain = 0,
    Logs    = 1,
    Leaves  = 2,
    Water   = 3,
    Lava    = 4,
    Glass   = 5,
};
#else // @header-generator platform
enum class GeoType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
