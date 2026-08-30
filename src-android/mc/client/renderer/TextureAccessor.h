#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/AbstractTextureAccessor.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct BedrockTextureData;
namespace cg { class ImageBuffer; }
namespace mce { class TextureGroup; }
namespace mce { struct TextureDescription; }
// clang-format on

class TextureAccessor : public ::AbstractTextureAccessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mTextureGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureAccessor();

    virtual ::cg::ImageBuffer* insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&);

    virtual ::cg::ImageBuffer* getCachedImageOrLoadSync(::ResourceLocation const&, bool const);

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const&) const;

    virtual void setTextureMetadata(::ResourceLocation const&, ::mce::TextureDescription const&);

    virtual ::BedrockTextureData const* getBedrockTextureData(::ResourceLocation const&) const;

    virtual bool isLoaded(::ResourceLocation const&, bool, ::cg::TextureSetLayerType const) const;

    virtual ::cg::ImageBuffer const& getMissingImageBuffer() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TextureAccessor(::gsl::not_null<Bedrock::NonOwnerPointer<mce::TextureGroup>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<mce::TextureGroup>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cg::ImageBuffer* $insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&);

    MCNAPI ::cg::ImageBuffer* $getCachedImageOrLoadSync(::ResourceLocation const&, bool const);

    MCNAPI ::cg::ImageBuffer* $getCachedImage(::ResourceLocation const&) const;

    MCNAPI void $setTextureMetadata(::ResourceLocation const&, ::mce::TextureDescription const&);

    MCNAPI ::BedrockTextureData const* $getBedrockTextureData(::ResourceLocation const&) const;

    MCNAPI bool $isLoaded(::ResourceLocation const&, bool, ::cg::TextureSetLayerType const) const;

    MCNAPI ::cg::ImageBuffer const& $getMissingImageBuffer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
