#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/containers/models/FilterResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/models/TextSearchMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerModel;
class ContainerScreenContext;
#if defined(LL_PLAT_A) // @header-generator platform
class CreativeItemRegistry;
class FilteredContainerModel;
class FurnaceBlockActor;
#else // @header-generator platform
#endif // @header-generator platform
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class Player;
class Recipe;
struct IngredientSearchInfo;
// clang-format on

class FurnaceContainerManagerModel : public ::ContainerManagerModel {
public:
    // FurnaceContainerManagerModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using FilterFunction = std::function<FilterResult(const ItemInstance&, bool)>;
#else // @header-generator platform
    using FilterFunction = ::std::function<::FilterResult(::ItemInstance const&, bool)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                           mBlockPos;
    ::ll::TypedStorage<4, 4, int>                                   mLastTickCount;
    ::ll::TypedStorage<4, 4, int>                                   mLastLitTime;
    ::ll::TypedStorage<4, 4, int>                                   mLastLitDuration;
    ::ll::TypedStorage<4, 4, int>                                   mLastStoredXP;
    ::ll::TypedStorage<4, 4, int>                                   mLastInputId;
    ::ll::TypedStorage<4, 4, int>                                   mLastInputAux;
    ::ll::TypedStorage<1, 1, ::BlockActorType const>                mBlockActorType;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName const>             mIngredientContainerName;
    ::ll::TypedStorage<8, 40, ::HashedString const>                 mRecipeTag;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<Recipe>>> mRecipeBook;
    ::ll::TypedStorage<1, 1, bool>                                  mSmeltableFilterOn;
    ::ll::TypedStorage<8, 24, std::string>                          mSearchString;
    ::ll::TypedStorage<8, 24, std::string>                          mCaseFoldedSearchString;
    ::ll::TypedStorage<4, 4, int>                                   mNumFoodRecipes;
    ::ll::TypedStorage<4, 4, int>                                   mNumBlocksRecipes;
    ::ll::TypedStorage<4, 4, int>                                   mNumItemsRecipes;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mBlockPos;
    ::ll::TypedStorage<4, 4, int>                                         mLastTickCount;
    ::ll::TypedStorage<4, 4, int>                                         mLastLitTime;
    ::ll::TypedStorage<4, 4, int>                                         mLastLitDuration;
    ::ll::TypedStorage<4, 4, int>                                         mLastStoredXP;
    ::ll::TypedStorage<4, 4, int>                                         mLastInputId;
    ::ll::TypedStorage<4, 4, int>                                         mLastInputAux;
    ::ll::TypedStorage<1, 1, ::BlockActorType const>                      mBlockActorType;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName const>                   mIngredientContainerName;
    ::ll::TypedStorage<8, 48, ::HashedString const>                       mRecipeTag;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Recipe>>> mRecipeBook;
    ::ll::TypedStorage<1, 1, bool>                                        mSmeltableFilterOn;
    ::ll::TypedStorage<8, 32, ::std::string>                              mSearchString;
    ::ll::TypedStorage<8, 32, ::std::string>                              mCaseFoldedSearchString;
    ::ll::TypedStorage<4, 4, int>                                         mNumFoodRecipes;
    ::ll::TypedStorage<4, 4, int>                                         mNumBlocksRecipes;
    ::ll::TypedStorage<4, 4, int>                                         mNumItemsRecipes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FurnaceContainerManagerModel();
#else // @header-generator platform
    virtual ~FurnaceContainerManagerModel() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> getItemCopies() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getSlot(int) const;
#else // @header-generator platform
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setData(int, int);
#else // @header-generator platform
    virtual void setData(int id, int value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastChanges();
#else // @header-generator platform
    virtual bool isValid(float pickRange) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid(float);
#else // @header-generator platform
    virtual void broadcastChanges() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenContext _postInit();
#else // @header-generator platform
    virtual ::ContainerScreenContext _postInit() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onDynamicContainerContentsChanged();
#else // @header-generator platform
    virtual void _onDynamicContainerContentsChanged() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FurnaceContainerManagerModel(::ContainerID, ::Player&, ::BlockPos const&);

    MCNAPI FurnaceContainerManagerModel(
        ::HashedString const&,
        ::SharedTypes::Legacy::ContainerType,
        ::BlockActorType,
        ::ContainerID,
        ::Player&,
        ::BlockPos const&
#else // @header-generator platform
    MCAPI FurnaceContainerManagerModel(
        ::HashedString const&                recipeTag,
        ::SharedTypes::Legacy::ContainerType containerType,
        ::BlockActorType                     blockActorType,
        ::ContainerID                        containerId,
        ::Player&                            player,
        ::BlockPos const&                    blockPos
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FilterResult _filterByInventory(::ItemInstance const&, bool) const;
#else // @header-generator platform
    MCAPI ::FilterResult _filterByInventory(::ItemInstance const& item, bool includeCursorItem) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _hasUnlockedRecipes(::ItemInstance const&) const;
#else // @header-generator platform
    MCAPI bool _hasUnlockedRecipes(::ItemInstance const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _populateRecipeBook();
#else // @header-generator platform
    MCAPI void _populateRecipeBook();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fireItemAcquiredEvent(::ItemInstance const&, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void fireItemAcquiredEvent(::ItemInstance const& itemInstance, int count);

    MCAPI void fireItemSmeltedEvent(::ItemDescriptor const& itemDescriptor);

    MCAPI int getBurnProgress(int max);

    MCAPI int getLitProgress(int max);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fireItemSmeltedEvent(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI ::std::vector<::ItemInstance> getUnlockedRecipeIngredientsForResult(::ItemInstance const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockActorType getBlockActorType() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void grantExperienceForSmelting(::ItemInstance const& item, int count);

    MCAPI bool isFinished(::std::string& outputName, int& outputId, int& outputAuxValue);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getBurnProgress(int);
#else // @header-generator platform
    MCAPI ::IngredientSearchInfo searchIngredientInContainers(
        ::ItemInstance const&                   itemInstance,
        ::std::vector<::ContainerModel*> const& containers
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemInstance> getFurnaceRecipeFor(::ItemInstance const&) const;
#else // @header-generator platform
    MCAPI void setIsFiltering(bool smeltableFilterOn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance getFurnaceRecipeResult(::ItemStack const&) const;

    MCNAPI ::ItemStack const& getIngredient() const;

    MCNAPI int getLitProgress(int);

    MCNAPI int getNumBlocksRecipes() const;

    MCNAPI int getNumFoodRecipes() const;

    MCNAPI int getNumItemsRecipes() const;

    MCNAPI std::string const& getSearchString() const;

    MCNAPI std::vector<ItemInstance> getUnlockedRecipeIngredientsForResult(::ItemInstance const&) const;

    MCNAPI void grantExperienceForSmelting(::ItemInstance const&, int);

    MCNAPI bool isFinished(std::string&, int&, int&);

    MCNAPI ::IngredientSearchInfo
    searchIngredientInContainers(::ItemInstance const&, std::vector<ContainerModel*> const&) const;

    MCNAPI void setIsFiltering(bool);

    MCNAPI void setSearchString(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setSearchString(::std::string const& searchString);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::BlockPos const&);

    MCNAPI void* $ctor(
        ::HashedString const&,
        ::SharedTypes::Legacy::ContainerType,
        ::BlockActorType,
        ::ContainerID,
        ::Player&,
        ::BlockPos const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::HashedString const&                recipeTag,
        ::SharedTypes::Legacy::ContainerType containerType,
        ::BlockActorType                     blockActorType,
        ::ContainerID                        containerId,
        ::Player&                            player,
        ::BlockPos const&                    blockPos
#endif // @header-generator platform
    );
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
    MCNAPI std::vector<ItemStack> $getItemCopies() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getSlot(int) const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getSlot(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setData(int, int);
#else // @header-generator platform
    MCAPI void $setData(int id, int value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastChanges();
#else // @header-generator platform
    MCAPI bool $isValid(float pickRange);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid(float);
#else // @header-generator platform
    MCAPI void $broadcastChanges();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenContext $_postInit();
#else // @header-generator platform
    MCAPI ::ContainerScreenContext $_postInit();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onDynamicContainerContentsChanged();
#else // @header-generator platform
    MCAPI void $_onDynamicContainerContentsChanged();


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
