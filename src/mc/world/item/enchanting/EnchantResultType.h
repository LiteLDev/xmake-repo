#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class EnchantResultType : uchar {
#else // @header-generator platform
enum class EnchantResultType : schar {
#endif // @header-generator platform
    Fail      = 0,
    Conflict  = 1,
    Increment = 2,
    Enchant   = 3,
};
