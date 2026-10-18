#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FetchState : int {
    DoFetch  = 0,
    Fetching = 1,
    Failed   = 2,
    Done     = 3,
};
#else // @header-generator platform
enum class FetchState : int {};
#endif // @header-generator platform

}
