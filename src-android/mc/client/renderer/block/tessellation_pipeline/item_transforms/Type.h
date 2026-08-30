#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline::ItemTransforms {

enum Type : uint {
    GUI                   = 0,
    FIRSTPERSON_RIGHTHAND = 1,
    FIRSTPERSON_LEFTHAND  = 2,
    THIRDPERSON_RIGHTHAND = 3,
    THIRDPERSON_LEFTHAND  = 4,
    GROUND                = 5,
    FIXED                 = 6,
    HEAD                  = 7,
    EMBEDDED              = 8,
    SHELF                 = 9,
    MAX                   = 10,
};

}
