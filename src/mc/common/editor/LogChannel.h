#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class LogChannel : uchar {
    Message = 1,
    Toast   = 2,
    All     = 3,
};

}
#endif // @header-generator platform
