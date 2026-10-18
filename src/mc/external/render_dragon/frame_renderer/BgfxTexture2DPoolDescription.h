#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/external/render_dragon/rendering/TextureUsage.h"
#include "mc/external/render_dragon/resources/TextureSamplerDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::details {

#if defined(LL_PLAT_A) // @header-generator platform
struct BgfxTexture2DPoolDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                               mWidth;
    ::ll::TypedStorage<2, 2, ushort>                               mHeight;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat>                 mFormat;
    ::ll::TypedStorage<8, 24, ::dragon::TextureSamplerDescription> mTextureSampler;
    ::ll::TypedStorage<4, 4, uint>                                 mMips;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::TextureUsage>    mTextureUsage;
    // NOLINTEND
};
#else // @header-generator platform
struct BgfxTexture2DPoolDescription {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::details
