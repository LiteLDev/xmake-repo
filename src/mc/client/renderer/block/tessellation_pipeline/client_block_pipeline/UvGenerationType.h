#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UvGenerationType : int {
    None  = 0,
    World = 1,
    Local = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class UvGenerationType : int {
    None  = 0,
    World = 1,
    Local = 2,
};
#else // @header-generator platform
enum class UvGenerationType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
