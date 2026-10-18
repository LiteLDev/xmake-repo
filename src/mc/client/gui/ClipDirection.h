#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ClipDirection : uchar {
    None   = 0,
    Left   = 1,
    Right  = 2,
    Up     = 3,
    Down   = 4,
    Center = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ClipDirection : schar {
    None   = 0,
    Left   = 1,
    Right  = 2,
    Up     = 3,
    Down   = 4,
    Center = 5,
};
#else // @header-generator platform
enum class ClipDirection : schar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
