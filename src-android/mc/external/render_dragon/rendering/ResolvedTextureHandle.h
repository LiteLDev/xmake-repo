#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/TextureHandle.h"
#include "mc/external/render_dragon/rendering/TextureResourceDesc.h"

namespace dragon::rendering {

struct ResolvedTextureHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle>                     mHandle;
    ::ll::TypedStorage<4, 32, ::dragon::rendering::TextureResourceDesc> mDesc;
    ::ll::TypedStorage<1, 1, bool>                                      mIsMissingTexture;
    // NOLINTEND
};

} // namespace dragon::rendering
