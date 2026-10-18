#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class WishListState : int {
    False = 0,
    True  = 1,
    None  = 2,
};
#else // @header-generator platform
enum class WishListState : int {};
#endif // @header-generator platform
