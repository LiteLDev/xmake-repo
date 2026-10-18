#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class LogContext : uchar {
    Player = 0,
    Global = 1,
};

}
#endif // @header-generator platform
