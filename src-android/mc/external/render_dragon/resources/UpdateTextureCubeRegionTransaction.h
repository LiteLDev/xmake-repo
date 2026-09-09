#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/external/render_dragon/rendering/TextureCubeFace.h"

namespace dragon::res {

class UpdateTextureCubeRegionTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                 mX;
    ::ll::TypedStorage<4, 4, uint>                                 mY;
    ::ll::TypedStorage<1, 1, ::dragon::rendering::TextureCubeFace> mFace;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer>                   mImageBuffer;
    // NOLINTEND
};

} // namespace dragon::res
