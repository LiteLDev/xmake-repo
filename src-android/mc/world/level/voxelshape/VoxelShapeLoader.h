#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/deps/resource_processing/category/ResourceCategory.h"

// auto generated forward declare list
// clang-format off
class AABB;
class HashedString;
class IMinecraftEventing;
class ResourcePackManager;
namespace Bedrock::Resources { template<::Bedrock::Resources::ResourceCategory T0> class SharedSlicesTraits; }
namespace SharedTypes::v1_21_110 { struct VoxelShapeDocument; }
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

class VoxelShapeLoader {
public:
    // VoxelShapeLoader inner types define
    using SharedSliceLoader = ::Bedrock::Resources::CategoryLoader<
        Bedrock::Resources::SharedSlicesTraits<(Bedrock::Resources::ResourceCategory)3>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 256>                        mLoader;
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mReflectionCtx;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShapeLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit VoxelShapeLoader(::cereal::ReflectionCtx&);

    MCNAPI void loadResources(::ResourcePackManager const&, ::VoxelShapes::VoxelShapeRegistry&, ::IMinecraftEventing&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx&);
    // NOLINTEND
};
