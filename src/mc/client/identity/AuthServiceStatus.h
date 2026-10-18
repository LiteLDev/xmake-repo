#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class AuthServiceStatus : int {
    Success = 0,
    Fail    = 1,
};
#else // @header-generator platform
enum class AuthServiceStatus : int {};
#endif // @header-generator platform

}
