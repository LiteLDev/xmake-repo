#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::Fonts {

#if defined(LL_PLAT_A) // @header-generator platform
enum LastResortFontMode : uint {
    FM_None            = 0,
    FM_Squares         = 1,
    FM_LatinAndSquares = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class LastResortFontMode : int {
    None            = 0,
    Squares         = 1,
    LatinAndSquares = 2,
};
#else // @header-generator platform
enum class LastResortFontMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
