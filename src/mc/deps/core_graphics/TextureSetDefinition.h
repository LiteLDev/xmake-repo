#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocationPair.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core_graphics/TextureSetLayerDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class TextureSetImageContainer; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cg { struct ImageDescription; }
#else // @header-generator platform
namespace cg { class TextureSetLayerDefinition; }
#endif // @header-generator platform
namespace mce { class Color; }
// clang-format on

namespace cg {

class TextureSetDefinition {
public:
    // TextureSetDefinition inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using TextureSetLayerInfoList = std::vector<cg::TextureSetLayerDefinition>;
#else // @header-generator platform
    using TextureSetLayerInfoList = ::std::vector<::cg::TextureSetLayerDefinition>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<cg::TextureSetLayerDefinition>>   mLayerInfoList;
    ::ll::TypedStorage<1, 1, bool>                                          mIsMissingTexture;
    ::ll::TypedStorage<1, 1, bool>                                          mNeedsDecompression;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cg::TextureSetImageContainer>> mTextureSetImageData;
    ::ll::UntypedStorage<8, 104>                                            mResourceLocationPair;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::cg::TextureSetLayerDefinition>>   mLayerInfoList;
    ::ll::TypedStorage<1, 1, bool>                                              mIsMissingTexture;
    ::ll::TypedStorage<1, 1, bool>                                              mNeedsDecompression;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cg::TextureSetImageContainer>> mTextureSetImageData;
    ::ll::TypedStorage<8, 112, ::ResourceLocationPair>                          mResourceLocationPair;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI TextureSetDefinition();

    MCAPI ::std::optional<::Bedrock::NonOwnerPointer<::cg::TextureSetLayerDefinition const>>
    _addLayer(::cg::TextureSetLayerType const& type, ::mce::Color const& color);

    MCAPI ::std::optional<::Bedrock::NonOwnerPointer<::cg::TextureSetLayerDefinition const>>
    _addLayer(::cg::TextureSetLayerType const& type, ::ResourceLocationPair const& resourceLocationPair);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::cg::TextureSetImageContainer> _getImageContainer();

    MCAPI void _setResourceLocationPair(::ResourceLocationPair const& loc);

    MCAPI uint64 getStorageSize(::cg::TextureSetLayerType t) const;

    MCAPI ::std::optional<::std::string> hasValidationError() const;

    MCAPI ~TextureSetDefinition();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cg
