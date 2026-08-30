#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/containers/managers/controllers/ItemStateData.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class FurnaceContainerManagerModel;
class HashedString;
class ItemStack;
class ItemStackBase;
struct AutoPlaceItem;
struct SelectedSlotInfo;
// clang-format on

class FurnaceContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<FurnaceContainerManagerModel>> mFurnaceContainerManagerModel;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName const>                    mIngredientName;
    ::ll::TypedStorage<1, 1, bool>                                         mClearInputGridOnChange;
    ::ll::TypedStorage<8, 24, std::vector<ItemStateData>>                  mSavedInventoryState;
    ::ll::TypedStorage<8, 32, ::SlotData const>                            mCreativeItemOutputSlot;
    ::ll::TypedStorage<8, 24, std::string>                                 mOutputName;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                             mSelectedRecipe;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceContainerManagerController();

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;

    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    virtual bool isOutputSlot(std::string const&) const;

    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FurnaceContainerManagerController(std::weak_ptr<FurnaceContainerManagerModel>);

    MCNAPI FurnaceContainerManagerController(std::weak_ptr<FurnaceContainerManagerModel>, ::HashedString const&);

    MCNAPI ::ItemInstance _getItemByIngredient(::ItemStack const&) const;

    MCNAPI void clearAllRecipes();

    MCNAPI void clearGhostRecipe(::ContainerEnumName const, int const);

    MCNAPI void evacuateContainerToInventory(::ContainerController*, std::vector<AutoPlaceItem> const&);

    MCNAPI void evacuateResultToInventory(std::vector<AutoPlaceItem> const&);

    MCNAPI int getBackgroundStyle(std::string const&, int) const;

    MCNAPI int getBurnProgress(int);

    MCNAPI std::string const& getExpandoItemGroupName(std::string const&, int);

    MCNAPI ::ItemInstance getExpectedSmeltResult(::ItemStack const&) const;

    MCNAPI ::ItemInstance const& getGhostItem(std::string const&, int const) const;

    MCNAPI int getLitProgress(int);

    MCNAPI int getNumBlocksRecipes() const;

    MCNAPI int getNumFoodRecipes() const;

    MCNAPI int getNumItemsRecipes() const;

    MCNAPI std::string const& getOutputName() const;

    MCNAPI ::ItemInstance const& getRecipeItem(std::string const&, int const) const;

    MCNAPI std::string const& getSearchString() const;

    MCNAPI void handleRecipeSelect(std::string const&, int, bool, std::vector<AutoPlaceItem> const&);

    MCNAPI void handleRecipeUnselect();

    MCNAPI bool isCreativeContainer(std::string const&) const;

    MCNAPI bool isExpandableItemFiltered(std::string const&, int) const;

    MCNAPI bool isFinished(std::string&, int&, int&);

    MCNAPI bool isRecipeContainer(std::string const&) const;

    MCNAPI bool isRecipeIngredient(std::string const&, int, ::ItemStackBase const&) const;

    MCNAPI bool isRecipeSelected() const;

    MCNAPI bool isRecipeSelected(std::string const&, int) const;

    MCNAPI bool isTakeableContainer(std::string const&) const;

    MCNAPI void registerOnIngredientOrResultChangedCallback(
        std::function<void(int, const ItemStack&, const ItemStack&)>,
        std::function<void(int, const ItemStack&, const ItemStack&)>
    );

    MCNAPI void setIsFiltering(bool);

    MCNAPI void setSearchString(std::string const&);

    MCNAPI void setSelectedRecipe(::ItemInstance const&);

    MCNAPI void setSelectedRecipe(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<FurnaceContainerManagerModel>);

    MCNAPI void* $ctor(std::weak_ptr<FurnaceContainerManagerModel>, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const&) const;

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    MCNAPI bool $isOutputSlot(std::string const&) const;

    MCNAPI void $_onItemAcquired(::ItemInstance const&, ::SlotData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
