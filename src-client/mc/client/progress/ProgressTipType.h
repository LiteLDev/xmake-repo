#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Progress {

enum class ProgressTipType : uchar {
    // bitfield representation
    Progress = 1 << 0,
    Realm    = 1 << 1,
    Addon    = 1 << 2,
    Creative = 1 << 3,
    Editor   = 1 << 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
