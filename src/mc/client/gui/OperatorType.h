#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class OperatorType : uchar {
    None  = 0,
    And   = 1,
    Or    = 2,
    Gt    = 3,
    Lt    = 4,
    Eq    = 5,
    Plus  = 6,
    Minus = 7,
    Mult  = 8,
    Div   = 9,
    Not   = 10,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class OperatorType : uchar {
    None  = 0,
    And   = 1,
    Or    = 2,
    Gt    = 3,
    Lt    = 4,
    Eq    = 5,
    Plus  = 6,
    Minus = 7,
    Mult  = 8,
    Div   = 9,
    Not   = 10,
};
#else // @header-generator platform
enum class OperatorType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
