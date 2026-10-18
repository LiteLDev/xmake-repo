#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Recipe;
// clang-format on

struct ShapedRecipeTriggeredEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Recipe*>> mCraftingRecipe;
    ::ll::TypedStorage<1, 1, bool>                           mIsAutoCraft;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Recipe const*>> mCraftingRecipe;
    ::ll::TypedStorage<1, 1, bool>                             mIsAutoCraft;
#endif // @header-generator platform
    // NOLINTEND
};
