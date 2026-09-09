#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeColorSampling {

enum class Pattern : int {
    SINGLE                        = 0,
    CORNERS_AND_MIDPOINTS_RANGE_4 = 1,
    GRID_3X3                      = 2,
    CROSS_RANGE_8                 = 3,
};

}
