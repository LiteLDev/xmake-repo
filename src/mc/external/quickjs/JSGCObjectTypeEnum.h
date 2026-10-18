#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSGCObjectTypeEnum : int {
    JsObject         = 0,
    FunctionBytecode = 1,
    Shape            = 2,
    VarRef           = 3,
    AsyncFunction    = 4,
    JsContext        = 5,
};
#endif // @header-generator platform
