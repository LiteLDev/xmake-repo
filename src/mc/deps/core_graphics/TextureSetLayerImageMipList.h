#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace cg { class ImageResource; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cg { struct ImageDescription; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace cg {

class TextureSetLayerImageMipList {
public:
    // TextureSetLayerImageMipList inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using TextureSetImageList = std::shared_ptr<cg::ImageResource>;
#else // @header-generator platform
    using TextureSetImageList = ::std::shared_ptr<::cg::ImageResource>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>           mLayerType;
    ::ll::TypedStorage<8, 16, std::shared_ptr<cg::ImageResource>> mImageList;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>               mLayerType;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cg::ImageResource>> mImageList;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TextureSetLayerImageMipList& operator=(TextureSetLayerImageMipList const&);
    TextureSetLayerImageMipList(TextureSetLayerImageMipList const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addImage(::cg::ImageBuffer);

    MCNAPI void addImage(std::shared_ptr<cg::ImageResource>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd);

    MCAPI void addImage(::cg::ImageBuffer imageToAdd);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cg
