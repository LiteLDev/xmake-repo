#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::atlas {

struct AtlasTileDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    // NOLINTEND
};

} // namespace dragon::atlas
