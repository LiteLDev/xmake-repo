#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::res {

enum class TextureError : int {
    InvalidHandle          = 0,
    UnsupportedDimension   = 1,
    MismatchedDescriptions = 2,
    ExpectedReadableSrc    = 3,
    ExpectedCopyableDst    = 4,
    AlreadyCreated         = 5,
    UnsupportedFormat      = 6,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
