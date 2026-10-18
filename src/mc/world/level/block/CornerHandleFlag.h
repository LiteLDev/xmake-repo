#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum CornerHandleFlag : uchar {
    CORNER_HANDLE_FLAG_Z = 1,
    CORNER_HANDLE_FLAG_Y = 2,
    CORNER_HANDLE_FLAG_X = 4,
#else // @header-generator platform
enum class CornerHandleFlag : uchar {
    Z = 1,
    Y = 2,
    X = 4,
#endif // @header-generator platform
};
