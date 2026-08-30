#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/voxel_shapes/Cells.h"

namespace VoxelShapes {

class VoxelShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::VoxelShapes::Cells> mCells;
    ::ll::UntypedStorage<8, 64>                     mXCoords;
    ::ll::UntypedStorage<8, 64>                     mYCoords;
    ::ll::UntypedStorage<8, 64>                     mZCoords;
    // NOLINTEND
};

} // namespace VoxelShapes
