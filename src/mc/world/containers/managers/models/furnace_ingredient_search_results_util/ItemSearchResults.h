#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/containers/managers/models/furnace_ingredient_search_results_util/ContainerInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace FurnaceIngredientSearchResultsUtil {

struct ItemSearchResults {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<FurnaceIngredientSearchResultsUtil::ContainerInfo>> mContainerPositions;
    ::ll::TypedStorage<4, 4, int>                                                             mTotalCount;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk335dc2;
    ::ll::UntypedStorage<4, 4>  mUnke8e253;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemSearchResults& operator=(ItemSearchResults const&);
    ItemSearchResults(ItemSearchResults const&);
    ItemSearchResults();
#endif // @header-generator platform
};

} // namespace FurnaceIngredientSearchResultsUtil
