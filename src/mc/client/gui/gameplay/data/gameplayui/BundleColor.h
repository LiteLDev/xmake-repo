#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class BundleColor : int {
    Black     = 0,
    Blue      = 1,
    Brown     = 2,
    Cyan      = 3,
    Gray      = 4,
    Green     = 5,
    LightBlue = 6,
    LightGray = 7,
    Lime      = 8,
    Magenta   = 9,
    Orange    = 10,
    Pink      = 11,
    Purple    = 12,
    Red       = 13,
    White     = 14,
    Yellow    = 15,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class BundleColor : int {
    Black     = 0,
    Blue      = 1,
    Brown     = 2,
    Cyan      = 3,
    Gray      = 4,
    Green     = 5,
    LightBlue = 6,
    LightGray = 7,
    Lime      = 8,
    Magenta   = 9,
    Orange    = 10,
    Pink      = 11,
    Purple    = 12,
    Red       = 13,
    White     = 14,
    Yellow    = 15,
};
#else // @header-generator platform
enum class BundleColor : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
