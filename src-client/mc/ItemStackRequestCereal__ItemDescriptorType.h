#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

enum class ItemDescriptorType : uchar {
    Empty    = 0,
    ItemName = 1,
    Molang   = 2,
    ItemTag  = 3,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
