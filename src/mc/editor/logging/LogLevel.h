#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class LogLevel : uchar {
    Info    = 0,
    Warning = 1,
    Error   = 2,
    Debug   = 3,
};

}
#endif // @header-generator platform
