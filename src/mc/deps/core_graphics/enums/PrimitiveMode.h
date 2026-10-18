#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PrimitiveMode : uchar {
    None          = 0,
    QuadList      = 1,
    TriangleList  = 2,
    TriangleStrip = 3,
    LineList      = 4,
    LineStrip     = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PrimitiveMode : uchar {
    None          = 0,
    QuadList      = 1,
    TriangleList  = 2,
    TriangleStrip = 3,
    LineList      = 4,
    LineStrip     = 5,
};
#else // @header-generator platform
enum class PrimitiveMode : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
