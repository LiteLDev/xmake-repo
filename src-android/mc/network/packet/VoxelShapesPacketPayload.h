#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/voxel_shapes/RegistryHandle.h"
#include "mc/deps/voxel_shapes/VoxelShape.h"

struct VoxelShapesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<VoxelShapes::VoxelShape>>                          mShapes;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, VoxelShapes::RegistryHandle>> mNameMap;
    ::ll::TypedStorage<2, 2, ushort>                                                         mCustomShapeCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VoxelShapesPacketPayload(
        std::vector<VoxelShapes::VoxelShape> const&,
        std::unordered_map<HashedString, VoxelShapes::RegistryHandle> const&,
        ushort const
    );

    MCNAPI ~VoxelShapesPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::vector<VoxelShapes::VoxelShape> const&,
        std::unordered_map<HashedString, VoxelShapes::RegistryHandle> const&,
        ushort const
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
