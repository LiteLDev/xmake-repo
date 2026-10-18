#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSAtomKindEnum : int {
    String  = 0,
    Symbol  = 1,
    Private = 2,
};
#endif // @header-generator platform
