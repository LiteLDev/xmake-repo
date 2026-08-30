#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/containers/models/FilterResult.h"
#include "mc/world/containers/models/TextSearchMode.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ContainerModel;
class ContainerScreenContext;
class CreativeItemRegistry;
class FilteredContainerModel;
class FurnaceBlockActor;
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
    using FilterFunction = std::function<FilterResult(const ItemInstance&, bool)>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceContainerManagerModel();

    virtual std::vector<ItemStack> getItemCopies() const;

    virtual void setSlot(int, ::ItemStack const&, bool);

    virtual ::ItemStack const& getSlot(int) const;

    virtual void setData(int, int);

    virtual void broadcastChanges();

    virtual bool isValid(float);

    virtual ::ContainerScreenContext _postInit();

    virtual void _onDynamicContainerContentsChanged();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FurnaceContainerManagerModel(::ContainerID, ::Player&, ::BlockPos const&);

    MCNAPI FurnaceContainerManagerModel(
        ::HashedString const&,
        ::SharedTypes::Legacy::ContainerType,
        ::BlockActorType,
        ::ContainerID,
        ::Player&,
        ::BlockPos const&
    );

    MCNAPI ::FilterResult _filterByInventory(::ItemInstance const&, bool) const;

    MCNAPI bool _hasUnlockedRecipes(::ItemInstance const&) const;

    MCNAPI void _populateRecipeBook();

    MCNAPI void fireItemAcquiredEvent(::ItemInstance const&, int);

    MCNAPI void fireItemSmeltedEvent(::ItemDescriptor const&);

    MCNAPI ::BlockActorType getBlockActorType() const;

    MCNAPI int getBurnProgress(int);

    MCNAPI std::vector<ItemInstance> getFurnaceRecipeFor(::ItemInstance const&) const;

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::BlockPos const&);

    MCNAPI void* $ctor(
        ::HashedString const&,
        ::SharedTypes::Legacy::ContainerType,
        ::BlockActorType,
        ::ContainerID,
        ::Player&,
        ::BlockPos const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int, ::ItemStack const&, bool);

    MCNAPI ::ItemStack const& $getSlot(int) const;

    MCNAPI void $setData(int, int);

    MCNAPI void $broadcastChanges();

    MCNAPI bool $isValid(float);

    MCNAPI ::ContainerScreenContext $_postInit();

    MCNAPI void $_onDynamicContainerContentsChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
