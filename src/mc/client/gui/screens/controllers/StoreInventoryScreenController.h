#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StoreInventoryScreenController {
public:
    // StoreInventoryScreenController inner types declare
    // clang-format off
    struct CategoryInfo;
    struct TabInfo;
    // clang-format on

    // StoreInventoryScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum PackCategory : uint {
        SKINS    = 0,
        WORLDS   = 1,
        TEXTURES = 2,
        MASHUPS  = 3,
        ADDONS   = 4,
        TOTAL    = 5,
        ALL      = 6,
        NONE     = 7,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class PackCategory : int {
        Skins    = 0,
        Worlds   = 1,
        Textures = 2,
        Mashups  = 3,
        Addons   = 4,
        Total    = 5,
        All      = 6,
        None     = 7,
    };
#else // @header-generator platform
    enum class PackCategory : int {};
#endif // @header-generator platform
#endif // @header-generator platform

    struct CategoryInfo {};

    struct TabInfo {};
};
