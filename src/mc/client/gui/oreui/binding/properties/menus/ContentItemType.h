#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
enum class ContentItemType : uchar {
    World         = 0,
    WorldTemplate = 1,
    Pack          = 2,
    Miscellaneous = 3,
};
#else // @header-generator platform
enum class ContentItemType : uchar {};
#endif // @header-generator platform

}
#endif // @header-generator platform
