#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Facing {

enum Name : uchar {
    DOWN            = 0,
    UP              = 1,
    NORTH           = 2,
    SOUTH           = 3,
    WEST            = 4,
    EAST            = 5,
    MAX             = 6,
    NOT_DEFINED     = 6,
    NUM_CULLING_IDS = 7,
};

}
