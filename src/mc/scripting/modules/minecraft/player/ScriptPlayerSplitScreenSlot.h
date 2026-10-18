#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptPlayerSplitScreenSlot : uchar {
    First  = 0,
    Second = 1,
    Third  = 2,
    Fourth = 3,
};

}
#endif // @header-generator platform
