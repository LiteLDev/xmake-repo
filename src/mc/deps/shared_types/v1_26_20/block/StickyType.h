#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20 {

enum class StickyType : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    None  = 0,
    Same  = 1,
    _Size = 2,
#else // @header-generator platform
    None = 0,
    Same = 1,
    Size = 2,
#endif // @header-generator platform
};

}
