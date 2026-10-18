#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class XboxAPICallResult : int {
    Success      = 0,
    XboxAPIError = 1,
};
#else // @header-generator platform
enum class XboxAPICallResult : int {};
#endif // @header-generator platform
