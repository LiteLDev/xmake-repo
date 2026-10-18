#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum FitToFrame : uchar {
    Enabled       = 0,
    DownscaleOnly = 1,
    Disabled      = 2,
};
#else // @header-generator platform
enum class FitToFrame : uchar {};
#endif // @header-generator platform
