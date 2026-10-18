#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/crafting/IngredientSearchInfo.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct IngredientSearchInfo;
// clang-format on
#endif // @header-generator platform

struct IngredientSearchResults {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::vector<IngredientSearchInfo>>> mSearchInfo;
    ::ll::TypedStorage<4, 4, int>                                             mTotalCraftable;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::IngredientSearchInfo>>> mSearchInfo;
    ::ll::TypedStorage<4, 4, int>                                                   mTotalCraftable;
#endif // @header-generator platform
    // NOLINTEND
};
