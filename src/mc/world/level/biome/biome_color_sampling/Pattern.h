#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeColorSampling {

enum class Pattern : int {
#if defined(LL_PLAT_A) // @header-generator platform
    SINGLE                        = 0,
    CORNERS_AND_MIDPOINTS_RANGE_4 = 1,
    GRID_3X3                      = 2,
    CROSS_RANGE_8                 = 3,
#else // @header-generator platform
    Single                    = 0,
    CornersAndMidpointsRange4 = 1,
    Grid3x3                   = 2,
    CrossRange8               = 3,
#endif // @header-generator platform
};

}
