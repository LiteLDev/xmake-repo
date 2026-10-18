#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class EduRefreshType : int {
    FetchUnknown = 0,
    FetchKnown   = 1,
    Add          = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class EduRefreshType : int {
    FetchUnknown = 0,
    FetchKnown   = 1,
    Add          = 2,
};
#else // @header-generator platform
enum class EduRefreshType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
