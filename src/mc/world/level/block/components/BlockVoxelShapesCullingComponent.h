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
#if defined(LL_PLAT_A) // @header-generator platform
    using FaceShapeHandles =
        ::Bedrock::DenseEnumMap<SharedTypes::Facing, VoxelShapes::RegistryHandle, (SharedTypes::Facing)6>;
#else // @header-generator platform
    using FaceShapeHandles = ::Bedrock::DenseEnumMap<::SharedTypes::Facing, ::VoxelShapes::RegistryHandle, 6>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>               mOcclusionShapeName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>               mOcclusionShapeName;
#endif // @header-generator platform
    ::ll::TypedStorage<2, 2, ::VoxelShapes::RegistryHandle> mOcclusionShapeHandle;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 12>                             mOcclusionShapeHandlesByFace;
#else // @header-generator platform
    ::ll::TypedStorage<2, 12, ::Bedrock::DenseEnumMap<::SharedTypes::Facing, ::VoxelShapes::RegistryHandle, 6>>
        mOcclusionShapeHandlesByFace;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockVoxelShapesCullingComponent(BlockVoxelShapesCullingComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
