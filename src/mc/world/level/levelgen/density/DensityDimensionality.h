#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DensityDimensionality : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    XZ_2D  = 0,
    XYZ_3D = 1,
#else // @header-generator platform
    Xz2d  = 0,
    Xyz3d = 1,
#endif // @header-generator platform
};
