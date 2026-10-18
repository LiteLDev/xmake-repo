#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class CodeScreenViewOption : uchar {
    SplitRight = 0,
    FullRight  = 1,
    SplitLeft  = 2,
    FullLeft   = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class CodeScreenViewOption : uchar {
    SplitRight = 0,
    FullRight  = 1,
    SplitLeft  = 2,
    FullLeft   = 3,
};
#else // @header-generator platform
enum class CodeScreenViewOption : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
