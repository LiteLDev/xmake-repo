#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructureVoidType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    Void   = 0,
    Air    = 1,
    _count = 2,
#else // @header-generator platform
    Void  = 0,
    Air   = 1,
    Count = 2,
#endif // @header-generator platform
};
