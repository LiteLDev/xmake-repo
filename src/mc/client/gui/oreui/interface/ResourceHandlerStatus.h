#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ResourceHandlerStatus : int {
    Success = 0,
    Failure = 1,
    Queued  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ResourceHandlerStatus : int {
    Success = 0,
    Failure = 1,
    Queued  = 2,
};
#else // @header-generator platform
enum class ResourceHandlerStatus : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
