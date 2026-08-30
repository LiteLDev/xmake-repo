#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"

namespace dragon::texturestreaming {

struct CachedMipData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<cg::ImageBuffer>> mMips;
    ::ll::TypedStorage<1, 1, uchar>                         mStartingMip;
    ::ll::TypedStorage<2, 2, ushort>                        mSourceWidth;
    ::ll::TypedStorage<2, 2, ushort>                        mSourceHeight;
    ::ll::TypedStorage<4, 4, uint>                          mBytesPerPixel;
    // NOLINTEND
};

} // namespace dragon::texturestreaming
