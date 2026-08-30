#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

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

}
