#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemCraftType.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/containers/managers/controllers/CraftableCountingData.h"
#include "mc/world/containers/managers/controllers/CraftingSessionInfo.h"
#include "mc/world/containers/managers/controllers/ItemStateData.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockSourceListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class ContainerController;
class CraftingContainerManagerModel;
class ItemRegistryRef;
class ItemStackBase;
class Recipe;
class RecipeIngredient;
class Recipes;
struct ActorBlockSyncMessage;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct RecipeSearchResult;
struct SelectedSlotInfo;
struct ShapedRecipeTriggeredEvent;
// clang-format on

class CraftingContainerManagerController : public ::ContainerManagerController {
public:
    // CraftingContainerManagerController inner types declare
    // clang-format off
    struct BlockChangeListener;
    // clang-format on

    // CraftingContainerManagerController inner types define
    struct BlockChangeListener : public ::BlockSourceListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockSource*>     mUnsafeSourcePointer;
        ::ll::TypedStorage<8, 16, ::BlockPos const&> mPos;
        ::ll::UntypedStorage<8, 48>                  mCallback;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~BlockChangeListener();
    
        virtual void onSourceDestroyed(::BlockSource&);
    
        virtual void onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onSourceDestroyed(::BlockSource&);

        MCNAPI void $onBlockChanged(
            ::BlockSource&,
            ::BlockPos const&,
            uint,
            ::Block const&,
            ::Block const&,
            int,
            ::ActorBlockSyncMessage const*,
            ::BlockChangedEventTarget,
            ::Actor*
        );
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::weak_ptr<CraftingContainerManagerModel>> mCraftingContainerManagerModel;
    ::ll::TypedStorage<4, 4, int> mGridSize;
    ::ll::TypedStorage<8, 8, ::Recipes*> mLevelRecipes;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const Recipe>>> mRecipes;
    ::ll::TypedStorage<8, 8, ::Recipe const*> mCraftingRecipe;
    ::ll::TypedStorage<8, 8, ::Recipe const*> mSelectedRecipe;
    ::ll::TypedStorage<1, 1, bool> mDisplayingInvalidRecipe;
    ::ll::TypedStorage<1, 1, bool> mClearInputGridOnChange;
    ::ll::TypedStorage<8, 32, ::SlotData const> mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 24, std::vector<ItemStateData>> mSavedInventoryState;
    ::ll::TypedStorage<8, 48, ::CraftingSessionInfo> mCraftingInformation;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mRemainingItems;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mResultPreviewItem;
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mAllResults;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mListenerLifeIndicator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CraftingContainerManagerController::BlockChangeListener>> mBlockChangeListener;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, CraftableCountingData>> mCraftableCountCache;
    ::ll::TypedStorage<1, 1, bool> mCraftableCountCacheDirty;
    ::ll::TypedStorage<1, 1, bool> mCloseCraftingContainer;
    ::ll::TypedStorage<1, 1, bool> mIsCrafting;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CraftingContainerManagerController();

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;

    virtual bool handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    virtual bool handleTakeAll(::SlotData const&, ::SlotData const&);

    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    virtual bool handleTakeHalf(::SlotData const&, ::SlotData const&);

    virtual bool handlePlaceOne(::SlotData const&, ::SlotData const&);

    virtual int handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    virtual int handleAutoPlaceStack(::SlotData const&, ::ItemTakeType, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    virtual void handleSplitSingle(::SlotData const&, ::SlotData const&);

    virtual void handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&);

    virtual bool handleDrop(::SlotData const&, ::ItemTransferAmount const);

    virtual bool handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    virtual void closeContainers();

    virtual bool isOutputSlot(std::string const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CraftingContainerManagerController(std::weak_ptr<CraftingContainerManagerModel>);

    MCNAPI void _filterRecipes();

    MCNAPI std::vector<RecipeSearchResult>
           _getRecipesForItem(::ItemInstance const&, std::vector<std::string> const&, ::ItemRegistryRef const, bool);

    MCNAPI void
    _handleItemCraftedEvents(::ItemInstance const&, std::vector<short> const&, ::ShapedRecipeTriggeredEvent const&);

    MCNAPI bool _handleTransferCraft(::SlotData const&, ::SlotData const&);

    MCNAPI void _handleTransferCraftExtraResults(std::vector<ItemInstance>&);

    MCNAPI ::CreateContainerItemScope
    _makeCreateItemScopeCrafting(::SlotData const&, ::ItemTransferAmount const&, std::vector<ItemInstance>&);

    MCNAPI ::CreateContainerItemScope _makeCreateItemScopeCreative(::SlotData const&, ::ItemTransferAmount const&);

    MCNAPI void _updateCraftingResultItem();

    MCNAPI bool autoCraftItem(::SlotData const&, ::ItemCraftType, std::vector<AutoPlaceItem> const&);

    MCNAPI void clearAllRecipes();

    MCNAPI void evacuateCraftingContainerToInventory(::ContainerController*, std::vector<AutoPlaceItem> const&);

    MCNAPI int getBackgroundStyle(std::string const&, int) const;

    MCNAPI ::CraftableCountingData getCraftableCount(::ItemInstance const&);

    MCNAPI ::CraftingSessionInfo& getCraftingInformation();

    MCNAPI ::Recipe const* getCurrentRecipe() const;

    MCNAPI std::string const& getExpandoItemGroupName(std::string const&, int);

    MCNAPI ::ItemInstance const& getGhostItem(std::string const&, int const) const;

    MCNAPI int getIndexForCreativeItem(std::string const&, ::ItemStackBase const&) const;

    MCNAPI ::ItemInstance const& getRecipeItem(std::string const&, int const) const;

    MCNAPI std::string const& getSearchString() const;

    MCNAPI void handleRecipeSelect(std::string const&, int, bool, std::vector<AutoPlaceItem> const&);

    MCNAPI bool hasIngredientSetChanged(::ItemStack const&);

    MCNAPI bool isCraftingTableValid(float);

    MCNAPI bool isCreativeContainer(std::string const&) const;

    MCNAPI bool isExpandableItemFiltered(std::string const&, int) const;

    MCNAPI bool isTakeableContainer(std::string const&) const;

    MCNAPI void resetCraftingInformation();

    MCNAPI void setIsFiltering(bool);

    MCNAPI bool setLastCraftedItem(::ItemInstance const&);

    MCNAPI void setOnItemExpandedCallback(std::function<void(const std::string&, int, int)>);

    MCNAPI void setSearchString(std::string const&);

    MCNAPI void switchExpandoItem(std::string const&, int);

    MCNAPI bool tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<CraftingContainerManagerModel>);
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

    MCNAPI bool $handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    MCNAPI bool $handleTakeAll(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    MCNAPI bool $handleTakeHalf(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handlePlaceOne(::SlotData const&, ::SlotData const&);

    MCNAPI int
    $handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    MCNAPI int $handleAutoPlaceStack(
        ::SlotData const&,
        ::ItemTakeType,
        std::vector<AutoPlaceItem> const&,
        std::vector<AutoPlaceResult>&
    );

    MCNAPI void $handleSplitSingle(::SlotData const&, ::SlotData const&);

    MCNAPI void $handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&);

    MCNAPI bool $handleDrop(::SlotData const&, ::ItemTransferAmount const);

    MCNAPI bool $handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    MCNAPI void $closeContainers();

    MCNAPI bool $isOutputSlot(std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
