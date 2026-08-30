#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class UnlockedRecipesServerComponent {
public:
    // UnlockedRecipesServerComponent inner types declare
    // clang-format off
    struct UnlockingInstruction;
    // clang-format on

    // UnlockedRecipesServerComponent inner types define
    struct UnlockingInstruction {
    public:
        // UnlockingInstruction inner types define
        enum class Instruction : int {
            UnlockRecipe     = 0,
            UnlockAllRecipes = 1,
            RemoveRecipe     = 2,
            RemoveAllRecipes = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::UnlockedRecipesServerComponent::UnlockingInstruction::Instruction> instruction;
        ::ll::TypedStorage<8, 24, std::string>                                                        recipeId;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnlockingInstruction& operator=(UnlockingInstruction const&);
        UnlockingInstruction(UnlockingInstruction const&);
        UnlockingInstruction();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                               mInventoryHasChanged;
    ::ll::TypedStorage<1, 1, bool>                                                               mInitialDataSent;
    ::ll::TypedStorage<4, 4, uint>                                                               mUsedContexts;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                                   mUnlockedRecipes;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>>                                           mChangedInventorySlots;
    ::ll::TypedStorage<8, 24, std::vector<UnlockedRecipesServerComponent::UnlockingInstruction>> mUnlockingInstructions;
    // NOLINTEND

public:
    // prevent constructor by default
    UnlockedRecipesServerComponent& operator=(UnlockedRecipesServerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void addChangedInventorySlot(int);

    MCNAPI void addUnlockedRecipe(std::string const&);

    MCNAPI void addUnlockingInstruction(::UnlockedRecipesServerComponent::UnlockingInstruction);

    MCNAPI void clearChangedInventorySlots();

    MCNAPI void clearUnlockingInstructions();

    MCNAPI std::unordered_set<int> const& getChangedInventorySlots() const;

    MCNAPI std::unordered_set<std::string> const& getUnlockedRecipes() const;

    MCNAPI std::vector<UnlockedRecipesServerComponent::UnlockingInstruction> const& getUnlockingInstructions() const;

    MCNAPI bool hasContextBeenUsed(::RecipeUnlockingRequirement::UnlockingContext) const;

    MCNAPI bool hasInitialDataBeenSent() const;

    MCNAPI bool hasInventoryChanged() const;

    MCNAPI bool hasUnlockedRecipes() const;

    MCNAPI bool hasUnlockingInstructions() const;

    MCNAPI bool isRecipeUnlocked(std::string const&) const;

    MCNAPI void markContextAsUsed(::RecipeUnlockingRequirement::UnlockingContext);

    MCNAPI void markInitialDataAsSent();

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void removeAllUnlockedRecipes();

    MCNAPI void removeUnlockedRecipe(std::string const&);

    MCNAPI void resetUsedContexts();

    MCNAPI ~UnlockedRecipesServerComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& COMPONENT_TAG();

    MCNAPI static std::string const& UNLOCKED_RECIPES_TAG();

    MCNAPI static std::string const& USED_CONTEXTS_TAG();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
