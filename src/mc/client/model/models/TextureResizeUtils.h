#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class TextureResizeUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::cg::ImageBuffer resizeTexture(::cg::ImageBuffer const&, uint, uint);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class TextureResizeUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::cg::ImageBuffer resizeTexture(::cg::ImageBuffer const& image, uint newHeight, uint newWidth);
    // NOLINTEND
};
#else // @header-generator platform
class TextureResizeUtils {};
#endif // @header-generator platform
#endif // @header-generator platform
