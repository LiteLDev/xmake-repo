#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/TextureHandle.h"
#include "mc/external/render_dragon/rendering/TextureResourceDesc.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResolvedTextureHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle>                     mHandle;
    ::ll::TypedStorage<4, 32, ::dragon::rendering::TextureResourceDesc> mDesc;
    ::ll::TypedStorage<1, 1, bool>                                      mIsMissingTexture;
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedTextureHandle {};
#endif // @header-generator platform

} // namespace dragon::rendering
