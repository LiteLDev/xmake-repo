#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::GenerationStep {

enum Type : uchar {
    RAW_GENERATION         = 0,
    LAKES                  = 1,
    LOCAL_MODIFICATIONS    = 2,
    UNDERGROUND_STRUCTURES = 3,
    SURFACE_STRUCTURES     = 4,
    STRONGHOLDS            = 5,
    UNDERGROUND_ORES       = 6,
    UNDERGROUND_DECORATION = 7,
    FLUID_SPRINGS          = 8,
    VEGETAL_DECORATION     = 9,
    TOP_LAYER_MODIFICATION = 10,
};

}
