#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/UUID.h"
#include "mc/world/item/crafting/RecipeIngredient.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/UUID.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"
#include "mc/world/item/crafting/RecipeIngredient.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class CompoundTag;
class ContainerModel;
class CraftingContainer;
class CraftingContext;
class ItemDescriptor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemInstance;
#endif // @header-generator platform
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class NetworkItemInstanceDescriptor;
class RecipeIngredient;
#endif // @header-generator platform
struct IngredientSearchResults;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct RecipeNetIdTag;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                        mResultsAreLoaded;
        ::ll::TypedStorage<8, 24, std::vector<ItemInstance>>                  mResults;
        ::ll::TypedStorage<8, 24, std::vector<NetworkItemInstanceDescriptor>> mUnloadedResults;
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                            mResultsAreLoaded;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                  mResults;
        ::ll::TypedStorage<8, 24, ::std::vector<::NetworkItemInstanceDescriptor>> mUnloadedResults;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        Results& operator=(Results const&);
        Results(Results const&);
#else // @header-generator platform
#endif // @header-generator platform
        Results();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit Results(std::vector<NetworkItemInstanceDescriptor> const&);
#else // @header-generator platform
        MCAPI explicit Results(::std::vector<::ItemInstance> const& results);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::vector<ItemInstance> const& getItems() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI void load(::BlockPalette const& blockPalette) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void load(::BlockPalette const&) const;
#else // @header-generator platform
        MCAPI ~Results();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(std::vector<NetworkItemInstanceDescriptor> const&);
#else // @header-generator platform
        MCAPI void* $ctor(::std::vector<::ItemInstance> const& results);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ConstructionContext {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                   recipeId;
        ::ll::TypedStorage<8, 24, std::vector<RecipeIngredient>> ingredients;
        ::ll::TypedStorage<8, 56, ::Recipe::Results>             results;
        ::ll::TypedStorage<8, 40, ::HashedString>                tag;
        ::ll::TypedStorage<4, 4, int>                            priority;
        ::ll::TypedStorage<8, 8, ::mce::UUID const*>             uuid;
        ::ll::TypedStorage<8, 32, ::RecipeUnlockingRequirement>  unlockingRequirement;
        ::ll::UntypedStorage<8, 24>                              formatVersion;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                     recipeId;
        ::ll::TypedStorage<8, 24, ::std::vector<::RecipeIngredient>> ingredients;
        ::ll::TypedStorage<8, 56, ::Recipe::Results>                 results;
        ::ll::TypedStorage<8, 48, ::HashedString>                    tag;
        ::ll::TypedStorage<4, 4, int>                                priority;
        ::ll::TypedStorage<8, 8, ::mce::UUID const*>                 uuid;
        ::ll::TypedStorage<8, 32, ::RecipeUnlockingRequirement>      unlockingRequirement;
        ::ll::TypedStorage<8, 24, ::SemVersion>                      formatVersion;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~ConstructionContext();
#else // @header-generator platform
        MCAPI ~ConstructionContext();
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

#if defined(LL_PLAT_A) // @header-generator platform
    using Ingredients = std::vector<RecipeIngredient>;
#else // @header-generator platform
    using Ingredients = ::std::vector<::RecipeIngredient>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ResultList = std::vector<ItemInstance>;
#else // @header-generator platform
    using ResultList = ::std::vector<::ItemInstance>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using UnloadedItemInstanceResultList = std::vector<NetworkItemInstanceDescriptor>;
#else // @header-generator platform
    using UnloadedItemInstanceResultList = ::std::vector<::NetworkItemInstanceDescriptor>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                     mRecipeId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                       mMyId;
    ::ll::TypedStorage<4, 4, int>                                mWidth;
    ::ll::TypedStorage<4, 4, int>                                mHeight;
    ::ll::TypedStorage<4, 4, int>                                mPriority;
    ::ll::TypedStorage<4, 4, ::RecipeNetId>                      mRecipeNetId;
    ::ll::TypedStorage<8, 24, ::std::vector<::RecipeIngredient>> mMyIngredients;
    ::ll::TypedStorage<8, 56, ::Recipe::Results>                 mResults;
    ::ll::TypedStorage<8, 32, ::RecipeUnlockingRequirement>      mUnlockingRequirement;
    ::ll::TypedStorage<8, 24, ::SemVersion>                      mRecipeDataVersion;
    ::ll::TypedStorage<8, 48, ::HashedString>                    mTag;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    Recipe& operator=(Recipe const&);
#else // @header-generator platform
    Recipe();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Recipe();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::std::vector<::ItemInstance> const&
    assemble(::CraftingContainer& craftingContainer, ::CraftingContext& craftingContext) const = 0;
#else // LL_PLAT_C
    virtual ::std::vector<::ItemInstance> const&
    assemble(::CraftingContainer& craftSlots, ::CraftingContext& craftingContext) const = 0;
#endif
#endif // @header-generator platform

    virtual int getCraftingSize() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RecipeIngredient const& getIngredient(int, int) const = 0;
#else // @header-generator platform
    virtual ::RecipeIngredient const& getIngredient(int x, int y) const = 0;
#endif // @header-generator platform

    virtual bool isShapeless() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const = 0;
#else // @header-generator platform
    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const = 0;
#endif // @header-generator platform

    virtual int size() const = 0;

    virtual ::mce::UUID const& getId() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemInstance> const& getResultItems() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemInstance> const& getResultItems() const;
#endif // @header-generator platform

    virtual bool isMultiRecipe() const;

    virtual bool hasDataDrivenResult() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool itemValidForRecipe(::ItemDescriptor const&, ::ItemStack const&) const;
#else // @header-generator platform
    virtual bool itemValidForRecipe(::ItemDescriptor const& recipeItem, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool itemsMatch(::ItemDescriptor const&, ::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual bool itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool itemsMatch(::ItemDescriptor const&, ::ItemDescriptor const&) const;
#else // @header-generator platform
    virtual bool
    itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs, ::CompoundTag const* rhsTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getIngredientsHash() const;
#else // @header-generator platform
    virtual uint64 getIngredientsHash() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IngredientSearchResults checkContainerItemsForUsability(std::vector<ContainerModel*> const&) const;
#else // @header-generator platform
    MCAPI explicit Recipe(::Recipe::ConstructionContext&& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int countQuantityOfIngredient(::ItemInstance const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::IngredientSearchResults
    checkContainerItemsForUsability(::std::vector<::ContainerModel*> const& containers) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI int countQuantityOfIngredient(::ItemInstance const& ingredient) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isAnyAuxValue(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static bool isAnyAuxValue(::ItemDescriptor const& ii);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Recipe::ConstructionContext&& context);
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::UUID const& $getId() const;
#else // @header-generator platform
    MCFOLD ::mce::UUID const& $getId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemInstance> const& $getResultItems() const;
#else // @header-generator platform
    MCFOLD ::std::vector<::ItemInstance> const& $getResultItems() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isMultiRecipe() const;
#else // @header-generator platform
    MCFOLD bool $isMultiRecipe() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasDataDrivenResult() const;
#else // @header-generator platform
    MCFOLD bool $hasDataDrivenResult() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $itemValidForRecipe(::ItemDescriptor const&, ::ItemStack const&) const;
#else // @header-generator platform
    MCAPI bool $itemValidForRecipe(::ItemDescriptor const& recipeItem, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $itemsMatch(::ItemDescriptor const&, ::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI bool $itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $itemsMatch(::ItemDescriptor const&, ::ItemDescriptor const&) const;
#else // @header-generator platform
    MCAPI bool $itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs, ::CompoundTag const* rhsTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getIngredientsHash() const;
#else // @header-generator platform
    MCAPI uint64 $getIngredientsHash() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
