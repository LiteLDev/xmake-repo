#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OPSpecialObjectEnum : int {
    Arguments       = 0,
    MappedArguments = 1,
    ThisFunc        = 2,
    NewTarget       = 3,
    HomeObject      = 4,
    VarObject       = 5,
    ImportMeta      = 6,
};
#endif // @header-generator platform
