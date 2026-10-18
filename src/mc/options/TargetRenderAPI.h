#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TargetRenderAPI : uchar {
    Default      = 0,
    Experimental = 1,
};
#else // @header-generator platform
enum class TargetRenderAPI : uchar {};
#endif // @header-generator platform
