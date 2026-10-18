#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FetchStatus : int {
    Idle          = 0,
    InProgress    = 1,
    Success       = 2,
    InternalError = 3,
    FetchFailed   = 4,
    RateLimit     = 5,
};
#else // @header-generator platform
enum class FetchStatus : int {};
#endif // @header-generator platform

}
