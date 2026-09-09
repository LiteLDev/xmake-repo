#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/containers/models/FilterResult.h"
#include "mc/world/containers/models/TextSearchMode.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/crafting/RecipeIngredientSet.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ContainerScreenContext;
class CreativeItemGroupCategory;
class CreativeItemRegistry;
class FilteredContainerModel;
class ItemStack;
class Player;
// clang-format on

class CraftingContainerManagerModel : public ::ContainerManagerModel {
public:
    // CraftingContainerManagerModel inner types define
    using FilterFunction = std::function<FilterResult(const ItemInstance&, bool)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mBlockPos;
    ::ll::TypedStorage<1, 1, bool>                             mWorkbench;
    ::ll::TypedStorage<1, 1, bool>                             mPocket;
    ::ll::TypedStorage<1, 1, bool>                             mCraftableFilterOn;
    ::ll::TypedStorage<8, 24, std::string>                     mSearchString;
    ::ll::TypedStorage<8, 24, std::string>                     mCaseFoldedSearchString;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContainerModel>> mInventoryContainerModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContainerModel>> mCraftingInputContainerModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContainerModel>> mHotbarContainerModel;
    ::ll::TypedStorage<8, 40, ::RecipeIngredientSet>           mIngredientSet;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                 mLastCraftedItem;
    ::ll::TypedStorage<4, 4, int>                              mContainerPopulationTabIndex;
    ::ll::TypedStorage<8, 8, ulong>                            mContainerPopulationGroupIndex;
    ::ll::TypedStorage<8, 8, ulong>                            mContainerPopulationGroupItemIndex;
    ::ll::TypedStorage<8, 8, ulong>                            mContainerPopulationItemIndex;
    ::ll::TypedStorage<8, 8, ulong>                            mContainerPopulationTotalItemCount;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingContainerManagerModel();

    virtual std::vector<ItemStack> getItemCopies() const;

    virtual void setSlot(int, ::ItemStack const&, bool);

    virtual ::ItemStack const& getSlot(int) const;

    virtual void setData(int, int);

    virtual void broadcastChanges();

    virtual bool tick();

    virtual bool isValid(float);

    virtual ::ContainerScreenContext _postInit();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    CraftingContainerManagerModel(::ContainerID, ::Player&, bool, bool, bool, ::BlockPos const&, std::string const&);

    MCNAPI std::shared_ptr<FilteredContainerModel> _createContainerModel(
        ::ContainerEnumName,
        ::CreativeItemGroupCategory* const,
        bool,
        std::function<FilterResult(const ItemInstance&, bool)>
    );

    MCNAPI ::FilterResult _filterByInventory(::ItemInstance const&, bool) const;

    MCNAPI ::FilterResult _filterByText(::ItemInstance const&, ::TextSearchMode) const;

    MCNAPI bool _foundInStartOfAnyWord(std::string const&) const;

    MCNAPI bool _hasUnlockedRecipes(::ItemInstance const&) const;

    MCNAPI std::vector<std::string> const getCraftingTags() const;

    MCNAPI bool hasIngredientSetChanged(::ItemStack const&);

    MCNAPI void setIsFiltering(bool);

    MCNAPI void setSearchString(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&, bool, bool, bool, ::BlockPos const&, std::string const&);
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

    MCNAPI bool $tick();

    MCNAPI bool $isValid(float);

    MCNAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
