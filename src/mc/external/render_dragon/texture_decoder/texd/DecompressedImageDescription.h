#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/texture_decoder/texd/PixelFormat.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/texture_decoder/texd/PixelFormat.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace texd {

#if defined(LL_PLAT_A) // @header-generator platform
struct DecompressedImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::texd::PixelFormat> pixelFormat;
    ::ll::TypedStorage<1, 1, bool>                isLinear;
    ::ll::TypedStorage<4, 4, uint>                width;
    ::ll::TypedStorage<4, 4, uint>                height;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DecompressedImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::texd::PixelFormat> pixelFormat;
    ::ll::TypedStorage<1, 1, bool>                isLinear;
    ::ll::TypedStorage<4, 4, uint>                width;
    ::ll::TypedStorage<4, 4, uint>                height;
    // NOLINTEND
};
#else // @header-generator platform
struct DecompressedImageDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace texd
