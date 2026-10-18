#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSFunctionKindEnum : int {
    Normal         = 0,
    Generator      = 1,
    Async          = 2,
    AsyncGenerator = 3,
};
#endif // @header-generator platform
