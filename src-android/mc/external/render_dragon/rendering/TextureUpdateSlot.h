#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

struct TextureUpdateSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>  mMip;
    ::ll::TypedStorage<2, 2, ushort> mLayer;
    ::ll::TypedStorage<2, 2, ushort> mX;
    ::ll::TypedStorage<2, 2, ushort> mY;
    ::ll::TypedStorage<2, 2, ushort> mWidth;
    ::ll::TypedStorage<2, 2, ushort> mHeight;
    ::ll::TypedStorage<4, 4, uint>   mPitch;
    // NOLINTEND
};

} // namespace dragon::rendering
