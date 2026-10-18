#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class Destination : int {
    Ignored    = 0,
    Constant   = 1,
    Expression = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Destination : int {
    Ignored    = 0,
    Constant   = 1,
    Expression = 2,
};
#else // @header-generator platform
enum class Destination : int {};
#endif // @header-generator platform
#endif // @header-generator platform
