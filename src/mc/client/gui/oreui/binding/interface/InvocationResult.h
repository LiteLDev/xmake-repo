#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class InvocationResult : uchar {
    Invalid = 255,
    Success = 0,
    Fail    = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class InvocationResult : schar {
    Invalid = -1,
    Success = 0,
    Fail    = 1,
};
#else // @header-generator platform
enum class InvocationResult : schar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
