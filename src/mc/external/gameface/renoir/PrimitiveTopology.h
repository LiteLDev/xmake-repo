#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum PrimitiveTopology : uint {
    PTO_TriangleList  = 0,
    PTO_TriangleStrip = 1,
    PTO_Points        = 2,
    PTO_Lines         = 3,
    PTO_LineStrip     = 4,
    PTO_Count         = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PrimitiveTopology : int {
    TriangleList  = 0,
    TriangleStrip = 1,
    Points        = 2,
    Lines         = 3,
    LineStrip     = 4,
    Count         = 5,
};
#else // @header-generator platform
enum class PrimitiveTopology : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
