#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::res {

class TextureRead {
public:
    // TextureRead inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Error : int {
        NotReady = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> mImage;
    ::ll::TypedStorage<8, 8, ulong>              mReadyFrame;
    // NOLINTEND
#else // @header-generator platform
    enum class Error : int {};
#endif // @header-generator platform
};

} // namespace dragon::res
