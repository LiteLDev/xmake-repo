#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

class BlockTypeComponentStorageFinalizer {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _finalizeCollisionBoxComponent(::BlockType&);

    MCNAPI void _finalizeRedstoneProducerComponent(::BlockType&);

    MCNAPI void _finalizeSelectionBoxComponent(::BlockType&);

    MCNAPI void addRemainingComponents(::BlockType&);

    MCNAPI void finalizeComponentData(::BlockType&);

    MCNAPI void finalizeComponentDataForVoxelShapes(::BlockType&, ::VoxelShapes::VoxelShapeRegistry&);
    // NOLINTEND
};
