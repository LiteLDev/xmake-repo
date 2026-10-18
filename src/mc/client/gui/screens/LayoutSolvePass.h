#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LayoutSolvePass : int {
    One   = 1,
    Two   = 2,
    Count = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class LayoutSolvePass : int {
    One   = 1,
    Two   = 2,
    Count = 3,
};
#else // @header-generator platform
enum class LayoutSolvePass : int {};
#endif // @header-generator platform
#endif // @header-generator platform
