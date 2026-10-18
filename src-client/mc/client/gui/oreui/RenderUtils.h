#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace mce { class TextureContainer; }
namespace mce { struct ClientTexture; }
namespace mce { struct TextureDescription; }
namespace mce { struct TextureResourceService; }
// clang-format on

namespace OreUI::RenderUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::cg::ImageBuffer> createZeroedImageBuffers(::mce::TextureDescription const& textureDescription);

MCAPI ::mce::TextureContainer createZeroedTextureContainer(::mce::TextureDescription const& textureDescription);

MCAPI void* prepareRenderDragonTexture(
    ::mce::TextureResourceService& textureResourceService,
    ::mce::ClientTexture&          targetTexture,
    ::mce::TextureContainer&&      textureContainer
);

MCAPI bool shouldFlipTextureOrigin();
// NOLINTEND

} // namespace OreUI::RenderUtils
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
