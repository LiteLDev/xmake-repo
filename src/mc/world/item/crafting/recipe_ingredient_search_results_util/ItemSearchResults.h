#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/crafting/recipe_ingredient_search_results_util/ContainerInfo.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace RecipeIngredientSearchResultsUtil { struct ContainerInfo; }
// clang-format on
#endif // @header-generator platform

namespace RecipeIngredientSearchResultsUtil {

struct ItemSearchResults {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<RecipeIngredientSearchResultsUtil::ContainerInfo>> mContainerPositions;
    ::ll::TypedStorage<8, 24, std::vector<int>> mIngredientSlotsItemValidFor;
    ::ll::TypedStorage<4, 4, int>               mTotalCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::RecipeIngredientSearchResultsUtil::ContainerInfo>> mContainerPositions;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mIngredientSlotsItemValidFor;
    ::ll::TypedStorage<4, 4, int>                 mTotalCount;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RecipeIngredientSearchResultsUtil
