#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum StencilOp : uint {
    STEO_Keep          = 0,
    STEO_Zero          = 1,
    STEO_Replace       = 2,
    STEO_Invert        = 3,
    STEO_Increment     = 4,
    STEO_Decrement     = 5,
    STEO_IncrementWrap = 6,
    STEO_DecrementWrap = 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class StencilOp : int {
    Keep          = 0,
    Zero          = 1,
    Replace       = 2,
    Invert        = 3,
    Increment     = 4,
    Decrement     = 5,
    IncrementWrap = 6,
    DecrementWrap = 7,
};
#else // @header-generator platform
enum class StencilOp : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
