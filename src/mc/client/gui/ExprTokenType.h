#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ExprTokenType : uchar {
    Unknown    = 0,
    Literal    = 1,
    Variable   = 2,
    Operator   = 3,
    Expression = 4,
    Property   = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ExprTokenType : uchar {
    Unknown    = 0,
    Literal    = 1,
    Variable   = 2,
    Operator   = 3,
    Expression = 4,
    Property   = 5,
};
#else // @header-generator platform
enum class ExprTokenType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
