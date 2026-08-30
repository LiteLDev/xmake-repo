#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::HeightmapProjection {

enum Type : uchar {
    NONE             = 0,
    WORLD_SURFACE_WG = 1,
    OCEAN_FLOOR_WG   = 2,
};

}
