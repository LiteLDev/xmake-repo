#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/platform/RenderAPI.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"

namespace dragon::res {

class WrapApiTextureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::platform::RenderAPI> mRendererType;
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mDescription;
    ::ll::TypedStorage<8, 8, void*>                         mExternalTexture;
    // NOLINTEND
};

} // namespace dragon::res
