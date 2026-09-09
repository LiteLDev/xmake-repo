#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"

namespace dragon::res {

class TextureRead {
public:
    // TextureRead inner types define
    enum class Error : int {
        NotReady = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> mImage;
    ::ll::TypedStorage<8, 8, ulong>              mReadyFrame;
    // NOLINTEND
};

} // namespace dragon::res
