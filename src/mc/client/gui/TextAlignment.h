#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextAlignment : int {
    Left   = 0,
    Right  = 1,
    Center = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TextAlignment : int {
    Left   = 0,
    Right  = 1,
    Center = 2,
};
#else // @header-generator platform
enum class TextAlignment : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
