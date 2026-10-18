#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class CreativeItemRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class FilteredContainerModel;
class ItemStack;
class Player;
// clang-format on

class CraftingContainerManagerModel : public ::ContainerManagerModel {
public:
    // CraftingContainerManagerModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using FilterFunction = std::function<FilterResult(const ItemInstance&, bool)>;
#else // @header-generator platform
    using FilterFunction = ::std::function<::FilterResult(::ItemInstance const&, bool)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mBlockPos;
    ::ll::TypedStorage<1, 1, bool>                                 mWorkbench;
    ::ll::TypedStorage<1, 1, bool>                                 mPocket;
    ::ll::TypedStorage<1, 1, bool>                                 mCraftableFilterOn;
    ::ll::TypedStorage<8, 32, ::std::string>                       mSearchString;
    ::ll::TypedStorage<8, 32, ::std::string>                       mCaseFoldedSearchString;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mInventoryContainerModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mCraftingInputContainerModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mHotbarContainerModel;
    ::ll::TypedStorage<8, 64, ::RecipeIngredientSet>               mIngredientSet;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                     mLastCraftedItem;
    ::ll::TypedStorage<4, 4, int>                                  mContainerPopulationTabIndex;
    ::ll::TypedStorage<8, 8, uint64>                               mContainerPopulationGroupIndex;
    ::ll::TypedStorage<8, 8, uint64>                               mContainerPopulationGroupItemIndex;
    ::ll::TypedStorage<8, 8, uint64>                               mContainerPopulationItemIndex;
    ::ll::TypedStorage<8, 8, uint64>                               mContainerPopulationTotalItemCount;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    CraftingContainerManagerModel();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftingContainerManagerModel();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CraftingContainerManagerModel();
#else // @header-generator platform
    virtual ~CraftingContainerManagerModel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> getItemCopies() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual void setSlot(int, ::ItemStack const&, bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getSlot(int) const;
#else // @header-generator platform
    virtual ::ItemStack const& getSlot(int) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setData(int, int);
#else // @header-generator platform
    virtual void setData(int, int) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastChanges();
#else // @header-generator platform
    virtual void broadcastChanges() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool tick();
#else // @header-generator platform
    virtual bool isValid(float pickRange) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid(float);
#else // @header-generator platform
    virtual bool tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenContext _postInit();
#else // @header-generator platform
    virtual ::ContainerScreenContext _postInit() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI CraftingContainerManagerModel(
        ::ContainerID        containerId,
        ::Player&            player,
        bool                 workbench,
        bool                 pocket,
        bool                 craftableFilterOn,
        ::BlockPos const&    pos,
        ::std::string const& inventorySearch
    );

    MCAPI ::std::shared_ptr<::FilteredContainerModel> _createContainerModel(
        ::ContainerEnumName                                          containerEnumName,
        ::CreativeItemGroupCategory* const                           category,
        bool                                                         doExpando,
        ::std::function<::FilterResult(::ItemInstance const&, bool)> rule
    );

    MCAPI ::FilterResult _filterByInventory(::ItemInstance const& item, bool includeCursorItem) const;

    MCAPI ::FilterResult _filterByText(::ItemInstance const& item, ::TextSearchMode searchMode) const;

    MCAPI bool _foundInStartOfAnyWord(::std::string const& itemName) const;

    MCAPI bool _hasUnlockedRecipes(::ItemInstance const& item) const;

    MCAPI ::std::vector<::std::string> const getCraftingTags() const;

    MCAPI bool hasIngredientSetChanged(::ItemStack const& inHand);

    MCAPI void setIsFiltering(bool craftableFilterOn);

    MCAPI void setSearchString(::std::string const& searchString);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContainerID, ::Player&, bool, bool, bool, ::BlockPos const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::ContainerID        containerId,
        ::Player&            player,
        bool                 workbench,
        bool                 pocket,
        bool                 craftableFilterOn,
        ::BlockPos const&    pos,
        ::std::string const& inventorySearch
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemStack> $getItemCopies() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD ::std::vector<::ItemStack> $getItemCopies() const;

    MCFOLD void $setSlot(int, ::ItemStack const&, bool);

    MCFOLD ::ItemStack const& $getSlot(int) const;

    MCFOLD void $setData(int, int);

    MCFOLD void $broadcastChanges();

    MCAPI bool $isValid(float pickRange);

    MCAPI bool $tick();

    MCAPI ::ContainerScreenContext $_postInit();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
