#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/TextureUVs.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
struct TextureUVCoordinateSet;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
struct TextureUVCoordinateSet;
namespace ClientBlockPipeline { struct TextureUVs; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
class Material : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Material : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
class Material {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // Material inner types declare
    // clang-format off
    struct PackedBools;
    // clang-format on

    // Material inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PackedBools {
    public:
        // member variables
        // NOLINTBEGIN
        bool mFaceDimming          : 1;
        bool mRandomizeUVRotation  : 1;
        bool mHasTextureVariations : 1;
        bool mAlphaMaskedTint      : 1;
        bool mDithering            : 1;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ClientBlockPipeline::TextureUVs>> mUvSets;
    ::ll::TypedStorage<4, 4, float>                                         mAmbientOcclusion;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>                            mBlockRenderLayer;
    ::ll::TypedStorage<1, 1, ::TintMethod>                                  mTintMethod;
    ::ll::TypedStorage<1, 1, ::ClientBlockPipeline::Material::PackedBools>  mPackedBools;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                         mTextureShiftBufferIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Material();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Material(std::vector<TextureUVCoordinateSet> const&, ::BlockRenderLayer);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<TextureUVCoordinateSet> const& EMPTY_TEXTURES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<TextureUVCoordinateSet> const&, ::BlockRenderLayer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PackedBools {
    public:
        // member variables
        // NOLINTBEGIN
        bool mFaceDimming          : 1;
        bool mRandomizeUVRotation  : 1;
        bool mHasTextureVariations : 1;
        bool mAlphaMaskedTint      : 1;
        bool mDithering            : 1;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlockPipeline::TextureUVs>> mUvSets;
    ::ll::TypedStorage<4, 4, float>                                             mAmbientOcclusion;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>                                mBlockRenderLayer;
    ::ll::TypedStorage<1, 1, ::TintMethod>                                      mTintMethod;
    ::ll::TypedStorage<1, 1, ::ClientBlockPipeline::Material::PackedBools>      mPackedBools;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                          mTextureShiftBufferIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    Material();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Material(::std::vector<::TextureUVCoordinateSet> const& uvSets, ::BlockRenderLayer terrainLayer);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::TextureUVCoordinateSet> const& EMPTY_TEXTURES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::TextureUVCoordinateSet> const& uvSets, ::BlockRenderLayer terrainLayer);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct PackedBools {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ClientBlockPipeline
