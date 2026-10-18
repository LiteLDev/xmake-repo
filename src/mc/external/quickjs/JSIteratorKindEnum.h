#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSIteratorKindEnum : int {
    Key         = 0,
    Value       = 1,
    KeyAndValue = 2,
};
#endif // @header-generator platform
