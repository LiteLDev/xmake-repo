#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/item/crafting/IngredientSearchInfo.h"
#include "mc/world/item/crafting/RecipeIngredient.h"

// auto generated forward declare list
// clang-format off
class Recipe;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct RecipeSearchResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Recipe const*>                    mRecipe;
    ::ll::TypedStorage<8, 24, std::vector<IngredientSearchInfo>> mSearchList;
    ::ll::TypedStorage<8, 24, std::vector<RecipeIngredient>>     mIngredients;
    ::ll::TypedStorage<4, 4, int>                                mCraftableCount;
    ::ll::TypedStorage<4, 4, int>                                mIngredientsPossessedCount;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkccb112;
    ::ll::UntypedStorage<8, 24> mUnk5e5315;
    ::ll::UntypedStorage<8, 24> mUnkb3af04;
    ::ll::UntypedStorage<4, 4>  mUnk242160;
    ::ll::UntypedStorage<4, 4>  mUnkfb7306;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RecipeSearchResult& operator=(RecipeSearchResult const&);
    RecipeSearchResult(RecipeSearchResult const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RecipeSearchResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    RecipeSearchResult();
#endif // @header-generator platform
};
