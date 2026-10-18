#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class IdentityEventResponse : int {
    None           = 0,
    ReadyForSignIn = 1,
    Error          = 2,
};
#else // @header-generator platform
enum class IdentityEventResponse : int {};
#endif // @header-generator platform

}
