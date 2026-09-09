#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

class BlockComponentStorageFinalizer {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _checkForCollisionComponentBoxDuplication(::Block&);

    MCNAPI void _checkForDuplicatingBlockGeometryForPartVisibility(::Block&);

    MCNAPI void _checkForMissingCullingComponentForMaterialOverride(::Block&);

    MCNAPI void _checkForMissingGeometryComponent(::Block&);

    MCNAPI void _checkForSelectionBoxComponentDuplication(::Block&);

    MCNAPI void _finalizeCollisionBoxComponent(::Block&);

    MCNAPI void _finalizeSelectionBoxComponent(::Block&);

    MCNAPI void addRemainingComponents(::Block&);

    MCNAPI void finalizeComponentData(::Block&);

    MCNAPI void finalizeComponentDataForVoxelShapes(::Block&, ::VoxelShapes::VoxelShapeRegistry&);
    // NOLINTEND
};
