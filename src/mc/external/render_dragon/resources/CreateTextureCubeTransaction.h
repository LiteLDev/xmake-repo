#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/TextureCubeImageData.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::res {

#if defined(LL_PLAT_A) // @header-generator platform
class CreateTextureCubeTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription>                      mTextureDescription;
    ::ll::TypedStorage<8, 296, std::optional<dragon::res::TextureCubeImageData>> mTextureCubeImageData;
    // NOLINTEND
};
#else // @header-generator platform
class CreateTextureCubeTransaction {};
#endif // @header-generator platform

} // namespace dragon::res
