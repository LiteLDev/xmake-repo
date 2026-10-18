#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum VerticalHalfEnum : uchar {
    BOTTOM = 0,
    TOP    = 1,
    _count = 2,
#else // @header-generator platform
enum class VerticalHalfEnum : uchar {
    Bottom = 0,
    Top    = 1,
    Count  = 2,
#endif // @header-generator platform
};
