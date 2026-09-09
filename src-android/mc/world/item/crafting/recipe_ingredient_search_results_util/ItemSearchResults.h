#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/recipe_ingredient_search_results_util/ContainerInfo.h"

namespace RecipeIngredientSearchResultsUtil {

struct ItemSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<RecipeIngredientSearchResultsUtil::ContainerInfo>> mContainerPositions;
    ::ll::TypedStorage<8, 24, std::vector<int>> mIngredientSlotsItemValidFor;
    ::ll::TypedStorage<4, 4, int>               mTotalCount;
    // NOLINTEND
};

} // namespace RecipeIngredientSearchResultsUtil
