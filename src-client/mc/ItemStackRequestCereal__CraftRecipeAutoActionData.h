#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ItemStackRequestCereal__RecipeIngredientData.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

namespace ItemStackRequestCereal {

struct CraftRecipeAutoActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                                                           mRecipeNetId;
    ::ll::TypedStorage<1, 1, uchar>                                                      mNumCrafts;
    ::ll::TypedStorage<8, 24, std::vector<ItemStackRequestCereal::RecipeIngredientData>> mIngredients;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
