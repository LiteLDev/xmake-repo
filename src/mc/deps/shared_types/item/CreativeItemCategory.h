#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

enum class CreativeItemCategory : uchar {
    All             = 0,
    Construction    = 1,
    Nature          = 2,
    Equipment       = 3,
    Items           = 4,
    ItemCommandOnly = 5,
    Undefined       = 6,
#if defined(LL_PLAT_A) // @header-generator platform
    NUM_CATEGORIES  = 7,
#else // @header-generator platform
    NumCategories   = 7,
#endif // @header-generator platform
};

}
