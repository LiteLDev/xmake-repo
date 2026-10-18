#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
enum class AsyncLoadResult : int {
    Pending   = 0,
    Completed = 1,
};
#else // @header-generator platform
enum class AsyncLoadResult : int {};
#endif // @header-generator platform

}
