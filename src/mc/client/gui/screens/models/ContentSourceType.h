#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ContentSourceType : int {
    None                   = 0,
    PackManager            = 1,
    WorldPackManager       = 2,
    RealmPackManager       = 3,
    RealmsWorldPackManager = 4,
    InvalidResource        = 5,
    WorldContent           = 6,
    WorldTemplate          = 7,
    SkinContent            = 8,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ContentSourceType : int {
    None                   = 0,
    PackManager            = 1,
    WorldPackManager       = 2,
    RealmPackManager       = 3,
    RealmsWorldPackManager = 4,
    InvalidResource        = 5,
    WorldContent           = 6,
    WorldTemplate          = 7,
    SkinContent            = 8,
};
#else // @header-generator platform
enum class ContentSourceType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
