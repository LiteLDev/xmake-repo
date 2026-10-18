#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/puv/LoadResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#else // @header-generator platform
#include "mc/deps/resource_processing/category/SharedSlicesTraits.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class IMinecraftEventing;
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Resources { template<::Bedrock::Resources::ResourceCategory T0> class SharedSlicesTraits; }
namespace SharedTypes::v1_21_110 { struct VoxelShapeDocument; }
#else // @header-generator platform
#endif // @header-generator platform
namespace VoxelShapes { class VoxelShapeRegistry; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#endif // @header-generator platform
// clang-format on

class VoxelShapeLoader {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // VoxelShapeLoader inner types define
    using SharedSliceLoader = ::Bedrock::Resources::CategoryLoader<
        Bedrock::Resources::SharedSlicesTraits<(Bedrock::Resources::ResourceCategory)3>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 256>                        mLoader;
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mReflectionCtx;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 264> mUnk7fbd7d;
    ::ll::UntypedStorage<8, 128> mUnkdf66d2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    VoxelShapeLoader& operator=(VoxelShapeLoader const&);
    VoxelShapeLoader(VoxelShapeLoader const&);
#endif // @header-generator platform
    VoxelShapeLoader();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit VoxelShapeLoader(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI explicit VoxelShapeLoader(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadResources(::ResourcePackManager const&, ::VoxelShapes::VoxelShapeRegistry&, ::IMinecraftEventing&);
#else // @header-generator platform
    MCNAPI void loadResources(
        ::ResourcePackManager const&       packManager,
        ::VoxelShapes::VoxelShapeRegistry& shapeRegistry,
        ::IMinecraftEventing&              eventing
    );

    MCNAPI ~VoxelShapeLoader();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
