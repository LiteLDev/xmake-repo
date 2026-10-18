#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class CloudRenderSideRelative : int {
    Any   = 0,
    Same  = 1,
    Other = 2,
};
#else // @header-generator platform
enum class CloudRenderSideRelative : int {};
#endif // @header-generator platform
