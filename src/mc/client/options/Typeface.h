#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class Typeface : int {
    Mojangles = 0,
    NotoSans  = 1,
    Count     = 2,
};
#else // @header-generator platform
enum class Typeface : int {};
#endif // @header-generator platform
