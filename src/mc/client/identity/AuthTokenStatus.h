#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class AuthTokenStatus : int {
    Success      = 0,
    Fail         = 1,
    IdentityNull = 2,
    NotSignedIn  = 3,
};
#else // @header-generator platform
enum class AuthTokenStatus : int {};
#endif // @header-generator platform

}
