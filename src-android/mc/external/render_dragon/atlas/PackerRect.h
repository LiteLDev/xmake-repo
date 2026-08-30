#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::atlas {

struct PackerRect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mX;
    ::ll::TypedStorage<4, 4, int> mY;
    ::ll::TypedStorage<4, 4, int> mWidth;
    ::ll::TypedStorage<4, 4, int> mHeight;
    // NOLINTEND
};

} // namespace dragon::atlas
