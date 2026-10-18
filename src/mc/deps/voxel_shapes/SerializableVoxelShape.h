#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/voxel_shapes/SerializableCells.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace VoxelShapes {

struct SerializableVoxelShape {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::VoxelShapes::SerializableCells> mCells;
    ::ll::TypedStorage<8, 24, std::vector<float>>               mXCoords;
    ::ll::TypedStorage<8, 24, std::vector<float>>               mYCoords;
    ::ll::TypedStorage<8, 24, std::vector<float>>               mZCoords;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkff7530;
    ::ll::UntypedStorage<8, 24> mUnk541aaf;
    ::ll::UntypedStorage<8, 24> mUnkd144ae;
    ::ll::UntypedStorage<8, 24> mUnk213941;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableVoxelShape();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SerializableVoxelShape(::VoxelShapes::SerializableVoxelShape const&);

    MCNAPI ::VoxelShapes::SerializableVoxelShape& operator=(::VoxelShapes::SerializableVoxelShape&&);

    MCNAPI ::VoxelShapes::SerializableVoxelShape& operator=(::VoxelShapes::SerializableVoxelShape const&);

    MCNAPI ~SerializableVoxelShape();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::VoxelShapes::SerializableVoxelShape const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VoxelShapes
