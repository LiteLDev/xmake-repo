#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/RecipeIngredient.h"

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
    ::ll::TypedStorage<8, 24, std::vector<RecipeIngredient>>                 mIngredients;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
