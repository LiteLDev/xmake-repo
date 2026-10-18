#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

enum class ResourceCategory : ushort {
#if defined(LL_PLAT_A) // @header-generator platform
    unknown       = 0,
    particle      = 1,
    camera        = 2,
    voxel_shape   = 3,
    trade_table   = 4,
    camera_spline = 5,
    actor         = 6,
    item          = 7,
#else // @header-generator platform
    Unknown      = 0,
    Particle     = 1,
    Camera       = 2,
    VoxelShape   = 3,
    TradeTable   = 4,
    CameraSpline = 5,
    Actor        = 6,
    Item         = 7,
#endif // @header-generator platform
};

}
