#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/c99/bgfx_texture_format.h"

struct bgfx_texture_info_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::bgfx_texture_format> format;
    ::ll::TypedStorage<4, 4, uint>                  storageSize;
    ::ll::TypedStorage<2, 2, ushort>                width;
    ::ll::TypedStorage<2, 2, ushort>                height;
    ::ll::TypedStorage<2, 2, ushort>                depth;
    ::ll::TypedStorage<2, 2, ushort>                numLayers;
    ::ll::TypedStorage<1, 1, uchar>                 numMips;
    ::ll::TypedStorage<1, 1, uchar>                 bitsPerPixel;
    ::ll::TypedStorage<1, 1, bool>                  cubeMap;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
