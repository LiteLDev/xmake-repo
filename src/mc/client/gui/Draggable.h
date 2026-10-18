#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class Draggable : uchar {
    NotDraggable = 0,
    Horizontal   = 1,
    Vertical     = 2,
    Both         = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Draggable : schar {
    NotDraggable = 0,
    Horizontal   = 1,
    Vertical     = 2,
    Both         = 3,
};
#else // @header-generator platform
enum class Draggable : schar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
