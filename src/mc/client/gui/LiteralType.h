#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LiteralType : uchar {
    None    = 0,
    Boolean = 1,
    Integer = 2,
    Float   = 3,
    String  = 4,
    Value   = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class LiteralType : uchar {
    None    = 0,
    Boolean = 1,
    Integer = 2,
    Float   = 3,
    String  = 4,
    Value   = 5,
};
#else // @header-generator platform
enum class LiteralType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
