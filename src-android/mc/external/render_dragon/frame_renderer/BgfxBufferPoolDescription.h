#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::details {

struct BgfxBufferPoolDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mCount;
    ::ll::TypedStorage<4, 4, uint> mStride;
    // NOLINTEND
};

} // namespace dragon::framerenderer::details
