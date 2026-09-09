#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/IngredientSearchInfo.h"
#include "mc/world/item/crafting/RecipeIngredient.h"

// auto generated forward declare list
// clang-format off
class Recipe;
// clang-format on

struct RecipeSearchResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Recipe const*>                    mRecipe;
    ::ll::TypedStorage<8, 24, std::vector<IngredientSearchInfo>> mSearchList;
    ::ll::TypedStorage<8, 24, std::vector<RecipeIngredient>>     mIngredients;
    ::ll::TypedStorage<4, 4, int>                                mCraftableCount;
    ::ll::TypedStorage<4, 4, int>                                mIngredientsPossessedCount;
    // NOLINTEND

public:
    // prevent constructor by default
    RecipeSearchResult& operator=(RecipeSearchResult const&);
    RecipeSearchResult(RecipeSearchResult const&);

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
};
