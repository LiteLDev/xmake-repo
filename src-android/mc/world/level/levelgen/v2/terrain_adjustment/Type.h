#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::TerrainAdjustment {

enum Type : uchar {
    NONE        = 0,
    BURY        = 1,
    BEARD_THIN  = 2,
    BEARD_BOX   = 3,
    ENCAPSULATE = 4,
};

}
