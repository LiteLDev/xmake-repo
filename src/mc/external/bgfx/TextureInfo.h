#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/TextureFormat.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/texture_format/Enum.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>       format;
    ::ll::TypedStorage<4, 4, uint>   storageSize;
    ::ll::TypedStorage<2, 2, ushort> width;
    ::ll::TypedStorage<2, 2, ushort> height;
    ::ll::TypedStorage<2, 2, ushort> depth;
    ::ll::TypedStorage<2, 2, ushort> numLayers;
    ::ll::TypedStorage<1, 1, uchar>  numMips;
    ::ll::TypedStorage<1, 1, uchar>  bitsPerPixel;
    ::ll::TypedStorage<1, 1, bool>   cubeMap;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::bgfx::TextureFormat::Enum> format;
    ::ll::TypedStorage<4, 4, uint>                        storageSize;
    ::ll::TypedStorage<2, 2, ushort>                      width;
    ::ll::TypedStorage<2, 2, ushort>                      height;
    ::ll::TypedStorage<2, 2, ushort>                      depth;
    ::ll::TypedStorage<2, 2, ushort>                      numLayers;
    ::ll::TypedStorage<1, 1, uchar>                       numMips;
    ::ll::TypedStorage<1, 1, uchar>                       bitsPerPixel;
    ::ll::TypedStorage<1, 1, bool>                        cubeMap;
    // NOLINTEND
};
#else // @header-generator platform
struct TextureInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
