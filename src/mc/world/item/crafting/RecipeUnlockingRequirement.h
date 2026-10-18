#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/crafting/RecipeIngredient.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class RecipeIngredient;
// clang-format on
#endif // @header-generator platform

class RecipeUnlockingRequirement {
public:
    // RecipeUnlockingRequirement inner types define
    enum class UnlockingContext : int {
        None               = 0,
        AlwaysUnlocked     = 1,
        PlayerInWater      = 2,
        PlayerHasManyItems = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RecipeUnlockingRequirement::UnlockingContext> mContext;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<RecipeIngredient>>                 mIngredients;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::RecipeIngredient>>             mIngredients;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RecipeUnlockingRequirement(::RecipeUnlockingRequirement::UnlockingContext);

    MCNAPI bool canBeUnlockedByContext(::RecipeUnlockingRequirement::UnlockingContext) const;

    MCNAPI bool canBeUnlockedByIngredient(::RecipeIngredient const&) const;

    MCNAPI ::RecipeUnlockingRequirement::UnlockingContext getUnlockingContext() const;

    MCNAPI std::vector<RecipeIngredient> const& getUnlockingIngredients() const;

    MCNAPI bool isUnlockable() const;

    MCNAPI bool isUnlockedByIngredients() const;

    MCNAPI ~RecipeUnlockingRequirement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RecipeUnlockingRequirement::UnlockingContext);
#else // @header-generator platform
    MCAPI ~RecipeUnlockingRequirement();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
