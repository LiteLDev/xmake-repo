#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSAutoInitIDEnum : int {
    Prototype = 0,
    ModuleNs  = 1,
    Prop      = 2,
};
#endif // @header-generator platform
