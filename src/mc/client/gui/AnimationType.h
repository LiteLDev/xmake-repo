#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class AnimationType : uchar {
    Alpha            = 0,
    Clip             = 1,
    Color            = 2,
    FlipBook         = 3,
    AsepriteFlipBook = 4,
    Offset           = 5,
    Size             = 6,
    UV               = 7,
    Wait             = 8,
    Unknown          = 9,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class AnimationType : schar {
    Alpha            = 0,
    Clip             = 1,
    Color            = 2,
    FlipBook         = 3,
    AsepriteFlipBook = 4,
    Offset           = 5,
    Size             = 6,
    Uv               = 7,
    Wait             = 8,
    Unknown          = 9,
};
#else // @header-generator platform
enum class AnimationType : schar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
