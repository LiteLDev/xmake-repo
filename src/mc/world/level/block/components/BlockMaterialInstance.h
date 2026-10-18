#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/components/BlockMaterialInstancePackedBools.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Material; }
// clang-format on

struct BlockMaterialInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                     mTextureName;
    ::ll::TypedStorage<4, 4, float>                                                 mAmbientOcclusion;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>                                    mRenderLayer;
    ::ll::TypedStorage<1, 1, ::BlockMaterialInstancePackedBools>                    mPackedBools;
    ::ll::TypedStorage<1, 1, ::TintMethod>                                          mTintMethod;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const ClientBlockPipeline::Material>> mMaterial;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<4>>                              mTextureName;
    ::ll::TypedStorage<4, 4, float>                                                     mAmbientOcclusion;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>                                        mRenderLayer;
    ::ll::TypedStorage<1, 1, ::BlockMaterialInstancePackedBools>                        mPackedBools;
    ::ll::TypedStorage<1, 1, ::TintMethod>                                              mTintMethod;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::Material const>> mMaterial;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BlockMaterialInstance();
#else // @header-generator platform
    MCAPI ~BlockMaterialInstance();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<std::string, BlockRenderLayer> const& renderLayerNameBiMap();
#else // @header-generator platform
    MCAPI static ::BidirectionalUnorderedMap<::std::string, ::BlockRenderLayer> const& renderLayerNameBiMap();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
