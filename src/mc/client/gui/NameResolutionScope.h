#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class NameResolutionScope : int {
    Global   = 0,
    Local    = 1,
    Sibling  = 2,
    Ancestor = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class NameResolutionScope : int {
    Global   = 0,
    Local    = 1,
    Sibling  = 2,
    Ancestor = 3,
};
#else // @header-generator platform
enum class NameResolutionScope : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
