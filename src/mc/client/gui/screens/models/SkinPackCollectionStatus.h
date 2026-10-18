#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SkinPackCollectionStatus : int {
    _Unknown = 0,
    Ready    = 1,
    Dirty    = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SkinPackCollectionStatus : int {
    Unknown = 0,
    Ready   = 1,
    Dirty   = 2,
};
#else // @header-generator platform
enum class SkinPackCollectionStatus : int {};
#endif // @header-generator platform
#endif // @header-generator platform
