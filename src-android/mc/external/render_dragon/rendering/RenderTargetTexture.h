#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"

namespace dragon::rendering {

struct RenderTargetTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>               mWidth;
    ::ll::TypedStorage<2, 2, ushort>               mHeight;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat> mFormat;
    // NOLINTEND
};

} // namespace dragon::rendering
