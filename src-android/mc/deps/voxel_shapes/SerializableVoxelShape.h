#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/voxel_shapes/SerializableCells.h"

namespace VoxelShapes {

struct SerializableVoxelShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::VoxelShapes::SerializableCells> mCells;
    ::ll::TypedStorage<8, 24, std::vector<float>>               mXCoords;
    ::ll::TypedStorage<8, 24, std::vector<float>>               mYCoords;
    ::ll::TypedStorage<8, 24, std::vector<float>>               mZCoords;
    // NOLINTEND
};

} // namespace VoxelShapes
