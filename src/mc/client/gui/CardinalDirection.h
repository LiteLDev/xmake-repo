#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class CardinalDirection : uchar {
    None  = 0,
    Up    = 1,
    Down  = 2,
    Left  = 3,
    Right = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class CardinalDirection : schar {
    None  = 0,
    Up    = 1,
    Down  = 2,
    Left  = 3,
    Right = 4,
};
#else // @header-generator platform
enum class CardinalDirection : schar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
