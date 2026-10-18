#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
enum class Int64BindingModeType : int {
    BigInt = 0,
    Mixed  = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Int64BindingModeType : int {
    BigInt = 0,
    Mixed  = 1,
};
#else // @header-generator platform
enum class Int64BindingModeType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
