#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FontSize : int {
    Small      = 0,
    Normal     = 1,
    Large      = 2,
    ExtraLarge = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class FontSize : int {
    Small      = 0,
    Normal     = 1,
    Large      = 2,
    ExtraLarge = 3,
};
#else // @header-generator platform
enum class FontSize : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
