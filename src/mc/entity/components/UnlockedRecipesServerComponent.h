#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::UnlockedRecipesServerComponent::UnlockingInstruction::Instruction> instruction;
        ::ll::TypedStorage<8, 24, std::string>                                                        recipeId;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4>  mUnkf225ff;
        ::ll::UntypedStorage<8, 32> mUnk5660a8;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        UnlockingInstruction& operator=(UnlockingInstruction const&);
        UnlockingInstruction(UnlockingInstruction const&);
        UnlockingInstruction();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~UnlockingInstruction();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                               mInventoryHasChanged;
    ::ll::TypedStorage<1, 1, bool>                                                               mInitialDataSent;
    ::ll::TypedStorage<4, 4, uint>                                                               mUsedContexts;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                                   mUnlockedRecipes;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>>                                           mChangedInventorySlots;
    ::ll::TypedStorage<8, 24, std::vector<UnlockedRecipesServerComponent::UnlockingInstruction>> mUnlockingInstructions;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                 mInventoryHasChanged;
    ::ll::TypedStorage<1, 1, bool>                                 mInitialDataSent;
    ::ll::TypedStorage<4, 4, uint>                                 mUsedContexts;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mUnlockedRecipes;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>           mChangedInventorySlots;
    ::ll::TypedStorage<8, 24, ::std::vector<::UnlockedRecipesServerComponent::UnlockingInstruction>>
        mUnlockingInstructions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    UnlockedRecipesServerComponent& operator=(UnlockedRecipesServerComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addChangedInventorySlot(int);
#else // @header-generator platform
    MCAPI void addUnlockingInstruction(::UnlockedRecipesServerComponent::UnlockingInstruction instruction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addUnlockedRecipe(std::string const&);
#else // @header-generator platform
    MCFOLD bool isRecipeUnlocked(::std::string const& recipeId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addUnlockingInstruction(::UnlockedRecipesServerComponent::UnlockingInstruction);
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~UnlockedRecipesServerComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& COMPONENT_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& COMPONENT_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& UNLOCKED_RECIPES_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& UNLOCKED_RECIPES_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& USED_CONTEXTS_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& USED_CONTEXTS_TAG();
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
