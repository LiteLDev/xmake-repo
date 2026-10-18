#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
