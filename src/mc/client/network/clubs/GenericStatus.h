#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Clubs {

#if defined(LL_PLAT_A) // @header-generator platform
enum class GenericStatus : int {
    Success   = 0,
    Fail      = 1,
    RateLimit = 2,
    Unknown   = 3,
};
#else // @header-generator platform
enum class GenericStatus : int {};
#endif // @header-generator platform

}
