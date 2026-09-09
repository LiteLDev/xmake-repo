#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocationPair.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/TextureSetLayerDefinition.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class TextureSetImageContainer; }
namespace cg { struct ImageDescription; }
namespace mce { class Color; }
// clang-format on

namespace cg {

class TextureSetDefinition {
public:
    // TextureSetDefinition inner types define
    using TextureSetLayerInfoList = std::vector<cg::TextureSetLayerDefinition>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<cg::TextureSetLayerDefinition>>   mLayerInfoList;
    ::ll::TypedStorage<1, 1, bool>                                          mIsMissingTexture;
    ::ll::TypedStorage<1, 1, bool>                                          mNeedsDecompression;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cg::TextureSetImageContainer>> mTextureSetImageData;
    ::ll::UntypedStorage<8, 104>                                            mResourceLocationPair;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureSetDefinition();

    MCNAPI std::optional<Bedrock::NonOwnerPointer<const cg::TextureSetLayerDefinition>>
           _addLayer(::cg::TextureSetLayerType const&, ::ResourceLocationPair const&);

    MCNAPI std::optional<Bedrock::NonOwnerPointer<const cg::TextureSetLayerDefinition>>
           _addLayer(::cg::TextureSetLayerType const&, ::mce::Color const&);

    MCNAPI void _addLayerInfo(::cg::TextureSetLayerDefinition&&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<cg::TextureSetImageContainer>> _getImageContainer();

    MCNAPI ::Bedrock::NonOwnerPointer<cg::TextureSetLayerDefinition> _getLayerRef(::cg::TextureSetLayerType const&);

    MCNAPI void _removeLayerInfo(::cg::TextureSetLayerType const&);

    MCNAPI void _setResourceLocationPair(::ResourceLocationPair const&);

    MCNAPI void _shrinkToFit();

    MCNAPI std::unique_ptr<cg::TextureSetImageContainer> extractImageContainer();

    MCNAPI ::cg::ImageDescription getImageDescription(::cg::TextureSetLayerType) const;

    MCNAPI std::vector<gsl::not_null<Bedrock::NonOwnerPointer<const cg::TextureSetLayerDefinition>>>
           getLayerInfoList() const;

    MCNAPI ::ResourceLocationPair const& getResourceLocationPair() const;

    MCNAPI ulong getStorageSize(::cg::TextureSetLayerType) const;

    MCNAPI bool hasLayer(::cg::TextureSetLayerType const&) const;

    MCNAPI std::optional<std::string> hasValidationError() const;

    MCNAPI bool isMissingTexture() const;

    MCNAPI ::Bedrock::NonOwnerPointer<const cg::TextureSetImageContainer> tryGetImageContainer() const;

    MCNAPI ::Bedrock::NonOwnerPointer<const cg::TextureSetLayerDefinition>
    tryGetLayerInfo(::cg::TextureSetLayerType const&) const;

    MCNAPI ~TextureSetDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cg
