#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/voxel_shapes/RegistryHandle.h"
#include "mc/deps/voxel_shapes/VoxelShape.h"

namespace VoxelShapes {

class VoxelShapeRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                           mInitialized;
    ::ll::TypedStorage<2, 2, ::VoxelShapes::RegistryHandle>                                  mEmptyShapeHandle;
    ::ll::UntypedStorage<2, 0>                                                               mUnitCubeShapeHandle;
    ::ll::TypedStorage<8, 8, ulong>                                                          mVanillaShapes;
    ::ll::TypedStorage<8, 8, ulong>                                                          mCustomShapes;
    ::ll::TypedStorage<8, 24, std::vector<VoxelShapes::VoxelShape>>                          mVoxelShapes;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, VoxelShapes::RegistryHandle>> mNameMap;
    // NOLINTEND
};

} // namespace VoxelShapes
