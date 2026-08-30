#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class BufferClearFlags : ushort {
    None         = 0,
    Color        = 1,
    Depth        = 2,
    Stencil      = 4,
    DepthStencil = 6,
    All          = 7,
};

}
