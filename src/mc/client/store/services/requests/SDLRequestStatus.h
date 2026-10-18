#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SDLRequestStatus : int {
    UNKNOWN       = 0,
    SUCCESS       = 1,
    REQUIRE_RETRY = 2,
    FAILURE       = 3,
    OFFLINE       = 4,
};
#else // @header-generator platform
enum class SDLRequestStatus : int {};
#endif // @header-generator platform
