#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx::Units {

#if defined(LL_PLAT_C) // @header-generator platform
enum class Enum : int {
    Kilo = 0,
    Kibi = 1,
};
#else // @header-generator platform
enum class Enum : int {};
#endif // @header-generator platform

}
#endif // @header-generator platform
