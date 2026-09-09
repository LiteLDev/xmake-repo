#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/lighting/light_propagation/LightVolumeLayer.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

namespace LightPropagation::Detail {

struct SubChunkDimensionPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                               mPos;
    ::ll::TypedStorage<1, 1, ::LightPropagation::Detail::LightVolumeLayer> mLayer;
    ::ll::TypedStorage<4, 4, ::DimensionType>                              mDimensionId;
    // NOLINTEND
};

} // namespace LightPropagation::Detail
