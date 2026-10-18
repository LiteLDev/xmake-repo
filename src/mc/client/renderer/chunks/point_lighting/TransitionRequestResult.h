#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PointLighting {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TransitionRequestResult : int {
    Rejected       = 0,
    InvalidRequest = 1,
    Success        = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TransitionRequestResult : int {
    Rejected       = 0,
    InvalidRequest = 1,
    Success        = 2,
};
#else // @header-generator platform
enum class TransitionRequestResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
