#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/deps/voxel_shapes/RegistryHandle.h"

struct BlockVoxelShapesCullingComponent {
public:
    // BlockVoxelShapesCullingComponent inner types define
    using FaceShapeHandles =
        ::Bedrock::DenseEnumMap<SharedTypes::Facing, VoxelShapes::RegistryHandle, (SharedTypes::Facing)6>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>               mOcclusionShapeName;
    ::ll::TypedStorage<2, 2, ::VoxelShapes::RegistryHandle> mOcclusionShapeHandle;
    ::ll::UntypedStorage<2, 12>                             mOcclusionShapeHandlesByFace;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockVoxelShapesCullingComponent(BlockVoxelShapesCullingComponent const&);
};
