#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/BufferClearFlags.h"

namespace dragon::rendering {

struct BufferClear {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::dragon::rendering::BufferClearFlags> mBufferClearMask;
    ::ll::TypedStorage<4, 4, uint>                                  mColor;
    ::ll::TypedStorage<4, 4, float>                                 mDepth;
    ::ll::TypedStorage<1, 1, uchar>                                 mStencilRef;
    // NOLINTEND
};

} // namespace dragon::rendering
