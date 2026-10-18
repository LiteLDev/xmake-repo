#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AttachmentType : int {
    Standing = 0,
    Hanging  = 1,
    Side     = 2,
    Multiple = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count   = 4,
#else // @header-generator platform
    Count    = 4,
#endif // @header-generator platform
};
