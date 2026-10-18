#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class EarlySignInState : int {
    Completed  = 0,
    InProgress = 1,
};
#else // @header-generator platform
enum class EarlySignInState : int {};
#endif // @header-generator platform

}
