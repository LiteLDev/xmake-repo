#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

enum class ResourceCategory : ushort {
    unknown       = 0,
    particle      = 1,
    camera        = 2,
    voxel_shape   = 3,
    trade_table   = 4,
    camera_spline = 5,
    actor         = 6,
    item          = 7,
};

}
