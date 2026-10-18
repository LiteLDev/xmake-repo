#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Recipe;
class Recipes;
// clang-format on

class UnlockedRecipesClientComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                              mUnlockedCategories;
    ::ll::TypedStorage<4, 4, int>                              mNewlyUnlockedCategories;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>>         mUnlockedItems;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mUnlockedRecipes;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mNewlyUnlockedRecipes;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                  mUnlockedCategories;
    ::ll::TypedStorage<4, 4, int>                                  mNewlyUnlockedCategories;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>           mUnlockedItems;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mUnlockedRecipes;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mNewlyUnlockedRecipes;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    UnlockedRecipesClientComponent& operator=(UnlockedRecipesClientComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UnlockedRecipesClientComponent();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI UnlockedRecipesClientComponent();

    MCAPI void addUnlockedRecipes(
        ::Recipes const&                    recipes,
        ::std::vector<::std::string> const& unlockedRecipeIds,
        bool                                newlyUnlocked
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addUnlockedRecipes(::Recipes const&, std::vector<std::string> const&, bool);
#else // @header-generator platform
    MCAPI bool isRecipeUnlocked(::Recipe const& recipe) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearNewlyUnlockedData();
#else // @header-generator platform
    MCAPI bool isRecipeUnlocked(::std::string const& recipeId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_set<std::string> const& getNewlyUnlockedRecipes() const;

    MCNAPI bool isCategoryUnlocked(::SharedTypes::CreativeItemCategory) const;

    MCNAPI bool isItemUnlocked(int) const;

    MCNAPI bool isRecipeUnlocked(std::string const&) const;

    MCNAPI bool isRecipeUnlocked(::Recipe const&) const;

    MCNAPI void removeAllRecipes();

    MCNAPI void removeRecipes(::Recipes const&, std::vector<std::string> const&);

    MCNAPI ~UnlockedRecipesClientComponent();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void removeAllRecipes();

    MCAPI void removeRecipes(::Recipes const& recipes, ::std::vector<::std::string> const& unlockedRecipeIds);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
