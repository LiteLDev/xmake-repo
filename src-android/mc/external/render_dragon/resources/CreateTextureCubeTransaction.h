#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/TextureCubeImageData.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"

namespace dragon::res {

class CreateTextureCubeTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription>                      mTextureDescription;
    ::ll::TypedStorage<8, 296, std::optional<dragon::res::TextureCubeImageData>> mTextureCubeImageData;
    // NOLINTEND
};

} // namespace dragon::res
