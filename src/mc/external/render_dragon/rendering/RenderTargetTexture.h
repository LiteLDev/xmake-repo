#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderTargetTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>               mWidth;
    ::ll::TypedStorage<2, 2, ushort>               mHeight;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat> mFormat;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderTargetTexture {};
#endif // @header-generator platform

} // namespace dragon::rendering
