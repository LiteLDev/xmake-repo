#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
namespace cg { struct ImageDescription; }
// clang-format on

namespace cg {

class TextureSetLayerImageMipList {
public:
    // TextureSetLayerImageMipList inner types define
    using TextureSetImageList = std::shared_ptr<cg::ImageResource>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>           mLayerType;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cg::ImageResource>> mImageList;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetLayerImageMipList& operator=(TextureSetLayerImageMipList const&);
    TextureSetLayerImageMipList(TextureSetLayerImageMipList const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addImage(::cg::ImageBuffer);

    MCNAPI void addImage(std::shared_ptr<cg::ImageResource>);
    // NOLINTEND
};

} // namespace cg
