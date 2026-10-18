#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ManageMembersStatus : int {
    Idle       = 0,
    InProgress = 1,
    Success    = 2,
    Fail       = 3,
};
#else // @header-generator platform
enum class ManageMembersStatus : int {};
#endif // @header-generator platform

}
