#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ShadowCategory : uchar {
    Actor = 0,
    Item  = 1,
};
#else // @header-generator platform
enum class ShadowCategory : uchar {};
#endif // @header-generator platform
