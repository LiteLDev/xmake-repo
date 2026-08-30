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

    struct CategoryInfo {};

    struct TabInfo {};
};
