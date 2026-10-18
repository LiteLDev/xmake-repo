#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/platform/RenderAPI.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::res {

#if defined(LL_PLAT_A) // @header-generator platform
class WrapApiTextureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::platform::RenderAPI> mRendererType;
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mDescription;
    ::ll::TypedStorage<8, 8, void*>                         mExternalTexture;
    // NOLINTEND
};
#else // @header-generator platform
class WrapApiTextureTransaction {};
#endif // @header-generator platform

} // namespace dragon::res
