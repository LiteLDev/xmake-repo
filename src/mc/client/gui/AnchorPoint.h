#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class AnchorPoint : uchar {
    TopLeft      = 0,
    TopMiddle    = 1,
    TopRight     = 2,
    LeftMiddle   = 3,
    Center       = 4,
    RightMiddle  = 5,
    BottomLeft   = 6,
    BottomMiddle = 7,
    BottomRight  = 8,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class AnchorPoint : schar {
    TopLeft      = 0,
    TopMiddle    = 1,
    TopRight     = 2,
    LeftMiddle   = 3,
    Center       = 4,
    RightMiddle  = 5,
    BottomLeft   = 6,
    BottomMiddle = 7,
    BottomRight  = 8,
};
#else // @header-generator platform
enum class AnchorPoint : schar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
