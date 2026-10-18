#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

enum class ValueType : schar {
    NullValue    = 0,
    IntValue     = 1,
    UintValue    = 2,
    RealValue    = 3,
    StringValue  = 4,
    BooleanValue = 5,
    ArrayValue   = 6,
    ObjectValue  = 7,
};

}
#endif // @header-generator platform
