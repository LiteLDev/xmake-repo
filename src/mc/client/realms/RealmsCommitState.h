#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsCommitState : int {
    Idle                 = 0,
    FetchingRealmsConfig = 1,
    FetchError           = 2,
    SelectingCommit      = 3,
    SelectError          = 4,
};
#else // @header-generator platform
enum class RealmsCommitState : int {};
#endif // @header-generator platform

}
