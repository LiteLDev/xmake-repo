#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum ComparisonFunction : uint {
    CMP_Never        = 0,
    CMP_Less         = 1,
    CMP_LessEqual    = 2,
    CMP_Greater      = 3,
    CMP_GreaterEqual = 4,
    CMP_Equal        = 5,
    CMP_NotEqual     = 6,
    CMP_Always       = 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ComparisonFunction : int {
    Never        = 0,
    Less         = 1,
    LessEqual    = 2,
    Greater      = 3,
    GreaterEqual = 4,
    Equal        = 5,
    NotEqual     = 6,
    Always       = 7,
};
#else // @header-generator platform
enum class ComparisonFunction : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
