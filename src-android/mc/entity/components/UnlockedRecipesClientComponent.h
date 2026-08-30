#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class Recipe;
class Recipes;
// clang-format on

class UnlockedRecipesClientComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mUnlockedCategories;
    ::ll::TypedStorage<4, 4, int>                              mNewlyUnlockedCategories;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>>         mUnlockedItems;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mUnlockedRecipes;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mNewlyUnlockedRecipes;
    // NOLINTEND

public:
    // prevent constructor by default
    UnlockedRecipesClientComponent& operator=(UnlockedRecipesClientComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UnlockedRecipesClientComponent();

    MCNAPI void addUnlockedRecipes(::Recipes const&, std::vector<std::string> const&, bool);

    MCNAPI void clearNewlyUnlockedData();

    MCNAPI std::unordered_set<std::string> const& getNewlyUnlockedRecipes() const;

    MCNAPI bool isCategoryUnlocked(::SharedTypes::CreativeItemCategory) const;

    MCNAPI bool isItemUnlocked(int) const;

    MCNAPI bool isRecipeUnlocked(std::string const&) const;

    MCNAPI bool isRecipeUnlocked(::Recipe const&) const;

    MCNAPI void removeAllRecipes();

    MCNAPI void removeRecipes(::Recipes const&, std::vector<std::string> const&);

    MCNAPI ~UnlockedRecipesClientComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
