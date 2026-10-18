#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core_graphics/CompressedImageBuffer.h"
#include "mc/deps/core_graphics/TextureSetLayerImageMipList.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace cg { class CompressedImageBuffer; }
#endif // @header-generator platform
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace cg { class TextureSetLayerImageMipList; }
#endif // @header-generator platform
namespace cg { struct ImageDescription; }
// clang-format on

namespace cg {

class TextureSetImageContainer : public ::Bedrock::EnableNonOwnerReferences {
public:
    // TextureSetImageContainer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using TextureSetImageContainerList = std::vector<cg::TextureSetLayerImageMipList>;
#else // @header-generator platform
    using TextureSetCompressedLayer = ::std::pair<::cg::TextureSetLayerType, ::cg::CompressedImageBuffer>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using TextureSetCompressedLayer = std::pair<cg::TextureSetLayerType, cg::CompressedImageBuffer>;
#else // @header-generator platform
    using TextureSetImageContainerList = ::std::vector<::cg::TextureSetLayerImageMipList>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<cg::TextureSetLayerImageMipList>> mLayerImageList;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<cg::TextureSetLayerType, cg::CompressedImageBuffer>>> mCompressedLayers;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetImageContainer& operator=(TextureSetImageContainer const&);
    TextureSetImageContainer(TextureSetImageContainer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureSetImageContainer();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::cg::TextureSetLayerImageMipList>> mLayerImageList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::cg::TextureSetLayerType, ::cg::CompressedImageBuffer>>>
        mCompressedLayers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removeLayer(::cg::TextureSetLayerType const&);

    MCNAPI void addCompressedImage(::cg::TextureSetLayerType const&, ::cg::CompressedImageBuffer&&);

    MCNAPI void addImage(::cg::TextureSetLayerType const&, ::cg::ImageBuffer);

    MCNAPI void addImage(::cg::TextureSetLayerType const&, std::shared_ptr<cg::ImageResource>);

    MCNAPI ::cg::ImageDescription getImageDescription(::cg::TextureSetLayerType const&, ulong) const;

    MCNAPI bool hasImage(::cg::TextureSetLayerType const&) const;

    MCNAPI ::cg::TextureSetImageContainer& operator=(::cg::TextureSetImageContainer&&);

    MCNAPI std::shared_ptr<cg::ImageResource> releaseImageResource(::cg::TextureSetLayerType const&);

    MCNAPI ::cg::CompressedImageBuffer const* tryGetCompressedImage(::cg::TextureSetLayerType const&) const;

    MCNAPI ::cg::ImageBuffer const* tryGetImage(::cg::TextureSetLayerType const&, ulong) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _removeLayer(::cg::TextureSetLayerType const& layerType);

    MCAPI void addImage(::cg::TextureSetLayerType const& layerType, ::cg::ImageBuffer imageBuffer);

    MCAPI void
    addImage(::cg::TextureSetLayerType const& layerType, ::std::shared_ptr<::cg::ImageResource> imageResource);

    MCAPI ::cg::ImageDescription getImageDescription(::cg::TextureSetLayerType const& layerType, uint64 mipLevel) const;
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
