#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity::_TokenRefreshState {

#if defined(LL_PLAT_A) // @header-generator platform
enum Enum : uint {
    NO_ACTION = 0,
    REFRESH   = 1,
    FAILED    = 2,
#else // @header-generator platform
enum class Enum : int {
    NoAction = 0,
    Refresh  = 1,
    Failed   = 2,
#endif // @header-generator platform
};

}
