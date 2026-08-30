#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core_graphics/CompressedImageBuffer.h"
#include "mc/deps/core_graphics/TextureSetLayerImageMipList.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
namespace cg { struct ImageDescription; }
// clang-format on

namespace cg {

class TextureSetImageContainer : public ::Bedrock::EnableNonOwnerReferences {
public:
    // TextureSetImageContainer inner types define
    using TextureSetImageContainerList = std::vector<cg::TextureSetLayerImageMipList>;

    using TextureSetCompressedLayer = std::pair<cg::TextureSetLayerType, cg::CompressedImageBuffer>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
};

} // namespace cg
