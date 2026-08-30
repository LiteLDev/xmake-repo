#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/UUID.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"
#include "mc/world/item/crafting/RecipeIngredient.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class CompoundTag;
class ContainerModel;
class CraftingContainer;
class CraftingContext;
class ItemDescriptor;
class ItemStack;
struct IngredientSearchResults;
// clang-format on

class Recipe {
public:
    // Recipe inner types declare
    // clang-format off
    class Results;
    struct ConstructionContext;
    // clang-format on

    // Recipe inner types define
    class Results {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                        mResultsAreLoaded;
        ::ll::TypedStorage<8, 24, std::vector<ItemInstance>>                  mResults;
        ::ll::TypedStorage<8, 24, std::vector<NetworkItemInstanceDescriptor>> mUnloadedResults;
        // NOLINTEND

    public:
        // prevent constructor by default
        Results& operator=(Results const&);
        Results(Results const&);
        Results();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit Results(std::vector<NetworkItemInstanceDescriptor> const&);

        MCNAPI std::vector<ItemInstance> const& getItems() const;

        MCNAPI void load(::BlockPalette const&) const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(std::vector<NetworkItemInstanceDescriptor> const&);
        // NOLINTEND
    };

    struct ConstructionContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                   recipeId;
        ::ll::TypedStorage<8, 24, std::vector<RecipeIngredient>> ingredients;
        ::ll::TypedStorage<8, 56, ::Recipe::Results>             results;
        ::ll::TypedStorage<8, 40, ::HashedString>                tag;
        ::ll::TypedStorage<4, 4, int>                            priority;
        ::ll::TypedStorage<8, 8, ::mce::UUID const*>             uuid;
        ::ll::TypedStorage<8, 32, ::RecipeUnlockingRequirement>  unlockingRequirement;
        ::ll::UntypedStorage<8, 24>                              formatVersion;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ConstructionContext();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using Ingredients = std::vector<RecipeIngredient>;

    using ResultList = std::vector<ItemInstance>;

    using UnloadedItemInstanceResultList = std::vector<NetworkItemInstanceDescriptor>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   mRecipeId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                   mMyId;
    ::ll::TypedStorage<4, 4, int>                            mWidth;
    ::ll::TypedStorage<4, 4, int>                            mHeight;
    ::ll::TypedStorage<4, 4, int>                            mPriority;
    ::ll::UntypedStorage<4, 0>                               mRecipeNetId;
    ::ll::TypedStorage<8, 24, std::vector<RecipeIngredient>> mMyIngredients;
    ::ll::TypedStorage<8, 56, ::Recipe::Results>             mResults;
    ::ll::TypedStorage<8, 32, ::RecipeUnlockingRequirement>  mUnlockingRequirement;
    ::ll::UntypedStorage<8, 24>                              mRecipeDataVersion;
    ::ll::TypedStorage<8, 40, ::HashedString>                mTag;
    // NOLINTEND

public:
    // prevent constructor by default
    Recipe& operator=(Recipe const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Recipe();

    virtual std::vector<ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const = 0;

    virtual int getCraftingSize() const = 0;

    virtual ::RecipeIngredient const& getIngredient(int, int) const = 0;

    virtual bool isShapeless() const = 0;

    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const = 0;

    virtual int size() const = 0;

    virtual ::mce::UUID const& getId() const;

    virtual std::vector<ItemInstance> const& getResultItems() const;

    virtual bool isMultiRecipe() const;

    virtual bool hasDataDrivenResult() const;

    virtual bool itemValidForRecipe(::ItemDescriptor const&, ::ItemStack const&) const;

    virtual bool itemsMatch(::ItemDescriptor const&, ::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual bool itemsMatch(::ItemDescriptor const&, ::ItemDescriptor const&) const;

    virtual ulong getIngredientsHash() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::IngredientSearchResults checkContainerItemsForUsability(std::vector<ContainerModel*> const&) const;

    MCNAPI int countQuantityOfIngredient(::ItemInstance const&) const;

    MCNAPI void generateUUID();

    MCNAPI int getHeight() const;

    MCNAPI std::vector<RecipeIngredient> const& getIngredients() const;

    MCNAPI ::TypedServerNetId<RecipeNetIdTag, uint, 0> const& getNetId() const;

    MCNAPI int getPriority() const;

    MCNAPI std::string const& getRecipeId() const;

    MCNAPI ::HashedString const& getTag() const;

    MCNAPI ::RecipeUnlockingRequirement const& getUnlockingRequirement() const;

    MCNAPI int getWidth() const;

    MCNAPI void loadResultList(::BlockPalette const&) const;

    MCNAPI void setId(::mce::UUID const&);

    MCNAPI void setNetId(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isAnyAuxValue(::ItemDescriptor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::UUID const& $getId() const;

    MCNAPI std::vector<ItemInstance> const& $getResultItems() const;

    MCNAPI bool $isMultiRecipe() const;

    MCNAPI bool $hasDataDrivenResult() const;

    MCNAPI bool $itemValidForRecipe(::ItemDescriptor const&, ::ItemStack const&) const;

    MCNAPI bool $itemsMatch(::ItemDescriptor const&, ::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI bool $itemsMatch(::ItemDescriptor const&, ::ItemDescriptor const&) const;

    MCNAPI ulong $getIngredientsHash() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
