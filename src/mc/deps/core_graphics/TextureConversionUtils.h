#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace cg {

#if defined(LL_PLAT_A) // @header-generator platform
class TextureConversionUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<cg::ImageBuffer> convertUnsupportedImageToSupportedGPUImage(::cg::ImageBuffer const&);

    MCNAPI static bool needsTextureConversion(::mce::TextureFormat const);
    // NOLINTEND
};
#else // @header-generator platform
class TextureConversionUtils {};
#endif // @header-generator platform

} // namespace cg
