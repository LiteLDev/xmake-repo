#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class TextureMergeUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _mergeTopImageToBaseImage(::cg::ImageBuffer&, ::cg::ImageBuffer const&);

    MCNAPI static ::cg::ImageBuffer buildMergedTexture(::cg::ImageBuffer const&, std::vector<cg::ImageBuffer> const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class TextureMergeUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _mergeTopImageToBaseImage(::cg::ImageBuffer& baseImage, ::cg::ImageBuffer const& topImage);

    MCNAPI static ::cg::ImageBuffer
    buildMergedTexture(::cg::ImageBuffer const& base, ::std::vector<::cg::ImageBuffer> const& textures);
    // NOLINTEND
};
#else // @header-generator platform
class TextureMergeUtils {};
#endif // @header-generator platform
#endif // @header-generator platform
