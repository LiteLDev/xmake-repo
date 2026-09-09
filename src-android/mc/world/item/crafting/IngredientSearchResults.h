#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/IngredientSearchInfo.h"

struct IngredientSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::vector<IngredientSearchInfo>>> mSearchInfo;
    ::ll::TypedStorage<4, 4, int>                                             mTotalCraftable;
    // NOLINTEND
};
