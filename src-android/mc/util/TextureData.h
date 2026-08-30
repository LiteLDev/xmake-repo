#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"

namespace Gameface::RenderUtils {

struct TextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::span<const uchar>> mData;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat>      mTextureFormat;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>       mConvertedTextureData;
    // NOLINTEND
};

} // namespace Gameface::RenderUtils
