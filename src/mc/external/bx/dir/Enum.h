#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx::Dir {

#if defined(LL_PLAT_C) // @header-generator platform
enum class Enum : int {
    Current = 0,
    Temp    = 1,
    Home    = 2,
    Count   = 3,
};
#else // @header-generator platform
enum class Enum : int {};
#endif // @header-generator platform

}
#endif // @header-generator platform
