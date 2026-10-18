#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class IdentitySignInState : int {
    NotSignedIn = 0,
    SigningIn   = 1,
    SignedIn    = 2,
    Count       = 3,
};
#else // @header-generator platform
enum class IdentitySignInState : int {};
#endif // @header-generator platform

}
