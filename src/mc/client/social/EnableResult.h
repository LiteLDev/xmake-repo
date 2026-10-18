#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class EnableResult : int {
    Failure = 0,
    Success = 1,
};
#else // @header-generator platform
enum class EnableResult : int {};
#endif // @header-generator platform

}
