#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinecraftGraphics;
class ResourcePackManager;
class TextureAtlas;
struct FlipbookTextureDescription;
namespace mce { class TextureGroup; }
// clang-format on

namespace TickingTextureFactory {
// functions
// NOLINTBEGIN
MCNAPI void createTickingTextures(
    ::std::vector<::FlipbookTextureDescription> const& flipbookTextureDescriptions,
    ::TextureAtlas const&                              textureAtlas,
    ::MinecraftGraphics&                               minecraftGraphics,
    ::std::shared_ptr<::mce::TextureGroup>             textureGroup
);

MCNAPI ::std::vector<::FlipbookTextureDescription>
parseDynamicTextures(::ResourcePackManager& loader, bool animationDisabled);
// NOLINTEND

} // namespace TickingTextureFactory
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
