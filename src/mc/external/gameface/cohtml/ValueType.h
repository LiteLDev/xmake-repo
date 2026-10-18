#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
enum ValueType : uint {
    VT_Null      = 0,
    VT_Undefined = 1,
    VT_Boolean   = 2,
    VT_Number    = 3,
    VT_String    = 4,
    VT_Object    = 5,
    VT_Array     = 6,
    VT_Count     = 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ValueType : int {
    Null      = 0,
    Undefined = 1,
    Boolean   = 2,
    Number    = 3,
    String    = 4,
    Object    = 5,
    Array     = 6,
    Count     = 7,
};
#else // @header-generator platform
enum class ValueType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
