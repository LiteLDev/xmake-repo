#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Gameface::RenderUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::span<const uchar>> mData;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat>      mTextureFormat;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>       mConvertedTextureData;
    // NOLINTEND
};
#else // @header-generator platform
struct TextureData {};
#endif // @header-generator platform

} // namespace Gameface::RenderUtils
