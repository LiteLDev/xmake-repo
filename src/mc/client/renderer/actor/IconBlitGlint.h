#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class IconBlitGlint : int {
    NoGlint = 0,
    Glint   = 1,
    UnGlint = 2,
};
#else // @header-generator platform
enum class IconBlitGlint : int {};
#endif // @header-generator platform
