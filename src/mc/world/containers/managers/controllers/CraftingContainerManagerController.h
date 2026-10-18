#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemCraftType.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/managers/controllers/CraftableCountingData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/managers/controllers/CraftingSessionInfo.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/managers/controllers/ItemStateData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemInstance.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
class ItemStackBase;
class Recipe;
#if defined(LL_PLAT_A) // @header-generator platform
class RecipeIngredient;
#else // @header-generator platform
#endif // @header-generator platform
class Recipes;
struct ActorBlockSyncMessage;
struct AutoPlaceItem;
struct AutoPlaceResult;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct CraftableCountingData;
#endif // @header-generator platform
struct CreateContainerItemScope;
#if defined(LL_PLAT_A) // @header-generator platform
struct ItemStackRequestScope;
#else // @header-generator platform
struct ItemStateData;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::BlockSource*>     mUnsafeSourcePointer;
        ::ll::TypedStorage<8, 16, ::BlockPos const&> mPos;
        ::ll::UntypedStorage<8, 48>                  mCallback;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk1d4d7a;
        ::ll::UntypedStorage<8, 8>  mUnk2b9a4e;
        ::ll::UntypedStorage<8, 64> mUnk2519ad;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        BlockChangeListener& operator=(BlockChangeListener const&);
        BlockChangeListener(BlockChangeListener const&);
        BlockChangeListener();
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ~BlockChangeListener();
    
        virtual void onSourceDestroyed(::BlockSource&);
    
        virtual void onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
        virtual ~BlockChangeListener() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual void onBlockChanged(
            ::BlockSource&                 source,
            ::BlockPos const&              pos,
            uint                           layer,
            ::Block const&                 block,
            ::Block const&                 oldBlock,
            int                            updateFlags,
            ::ActorBlockSyncMessage const* syncMsg,
            ::BlockChangedEventTarget      eventTarget,
            ::Actor*                       blockChangeSource
        ) /*override*/;

        virtual void onSourceDestroyed(::BlockSource& source) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $onSourceDestroyed(::BlockSource&);
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI void $onBlockChanged(
            ::BlockSource&                 source,
            ::BlockPos const&              pos,
            uint                           layer,
            ::Block const&                 block,
            ::Block const&                 oldBlock,
            int                            updateFlags,
            ::ActorBlockSyncMessage const* syncMsg,
            ::BlockChangedEventTarget      eventTarget,
            ::Actor*                       blockChangeSource
        );

        MCNAPI void $onSourceDestroyed(::BlockSource& source);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CraftingContainerManagerModel>>        mCraftingContainerManagerModel;
    ::ll::TypedStorage<4, 4, int>                                                      mGridSize;
    ::ll::TypedStorage<8, 8, ::Recipes*>                                               mLevelRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::Recipe const>>> mRecipes;
    ::ll::TypedStorage<8, 8, ::Recipe const*>                                          mCraftingRecipe;
    ::ll::TypedStorage<8, 8, ::Recipe const*>                                          mSelectedRecipe;
    ::ll::TypedStorage<1, 1, bool>                                                     mDisplayingInvalidRecipe;
    ::ll::TypedStorage<1, 1, bool>                                                     mClearInputGridOnChange;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                        mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStateData>>                          mSavedInventoryState;
    ::ll::TypedStorage<8, 48, ::CraftingSessionInfo>                                   mCraftingInformation;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>                              mRemainingItems;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                         mResultPreviewItem;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                           mAllResults;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                 mListenerLifeIndicator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftingContainerManagerController::BlockChangeListener>>
                                                                                  mBlockChangeListener;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::CraftableCountingData>> mCraftableCountCache;
    ::ll::TypedStorage<1, 1, bool>                                                mCraftableCountCacheDirty;
    ::ll::TypedStorage<1, 1, bool>                                                mCloseCraftingContainer;
    ::ll::TypedStorage<1, 1, bool>                                                mIsCrafting;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    CraftingContainerManagerController();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftingContainerManagerController();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CraftingContainerManagerController();
#else // @header-generator platform
    virtual ~CraftingContainerManagerController() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;
#else // @header-generator platform
    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleTakeAmount(::SlotData const&, int, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleTakeAll(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleTakeHalf(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handlePlaceOne(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);
#else // @header-generator platform
    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int handleAutoPlaceStack(::SlotData const&, ::ItemTakeType, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);
#else // @header-generator platform
    virtual int handleAutoPlaceStack(
        ::SlotData const&                     srcSlot,
        ::ItemTakeType                        type,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleSplitSingle(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual void handleSplitSingle(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&);
#else // @header-generator platform
    virtual void handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleDrop(::SlotData const&, ::ItemTransferAmount const);
#else // @header-generator platform
    virtual bool
    handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);
#else // @header-generator platform
    virtual bool handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void closeContainers();
#else // @header-generator platform
    virtual void closeContainers() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isOutputSlot(std::string const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit CraftingContainerManagerController(
        ::std::weak_ptr<::CraftingContainerManagerModel> containerManagerModel
    );

    MCNAPI void _filterRecipes();

    MCNAPI ::std::vector<::RecipeSearchResult> _getRecipesForItem(
        ::ItemInstance const&               recipeItem,
        ::std::vector<::std::string> const& tags,
        ::ItemRegistryRef const             itemRegistry,
        bool
    );

    MCNAPI void _handleItemCraftedEvents(
        ::ItemInstance const&               resultItem,
        ::std::vector<short> const&         ingredientIds,
        ::ShapedRecipeTriggeredEvent const& shapedRecipeTriggeredEvent
    );

    MCNAPI bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void _handleTransferCraftExtraResults(::std::vector<::ItemInstance>& allResults);

    MCNAPI ::CreateContainerItemScope _makeCreateItemScopeCrafting(
        ::SlotData const&              srcSlot,
        ::ItemTransferAmount const&    takeAmount,
        ::std::vector<::ItemInstance>& allResults
    );

    MCNAPI ::CreateContainerItemScope
    _makeCreateItemScopeCreative(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);

    MCNAPI void _updateCraftingResultItem();

    MCNAPI bool
    autoCraftItem(::SlotData const& recipeSlot, ::ItemCraftType craftAmount, ::std::vector<::AutoPlaceItem> const&);

    MCNAPI void clearAllRecipes();

    MCNAPI void evacuateCraftingContainerToInventory(
        ::ContainerController*                container,
        ::std::vector<::AutoPlaceItem> const& autoPlace
    );

    MCNAPI int getBackgroundStyle(::std::string const& containerName, int collectionIndex) const;

    MCNAPI ::CraftableCountingData getCraftableCount(::ItemInstance const& item);

    MCNAPI ::std::string const& getExpandoItemGroupName(::std::string const& collectionName, int collectionIndex);

    MCNAPI int getIndexForCreativeItem(::std::string const& collectionName, ::ItemStackBase const& item) const;

    MCNAPI ::ItemInstance const& getRecipeItem(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI ::std::string const& getSearchString() const;

    MCNAPI void handleRecipeSelect(
        ::std::string const&                  collectionName,
        int                                   collectionIndex,
        bool                                  displayOnly,
        ::std::vector<::AutoPlaceItem> const& autoPlace
    );

    MCNAPI bool isCreativeContainer(::std::string const& containerName) const;

    MCNAPI bool isExpandableItemFiltered(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI bool isTakeableContainer(::std::string const& containerName) const;

    MCNAPI bool setLastCraftedItem(::ItemInstance const& item);

    MCNAPI void setOnItemExpandedCallback(::std::function<void(::std::string const&, int, int)> callback);

    MCNAPI void switchExpandoItem(::std::string const& collectionName, int collectionIndex);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::weak_ptr<CraftingContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::CraftingContainerManagerModel> containerManagerModel);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI bool $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI bool $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI bool $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI int $handleAutoPlaceStack(
        ::SlotData const&                     srcSlot,
        ::ItemTakeType                        type,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI void $handleSplitSingle(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void $handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    MCNAPI bool $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    MCNAPI bool $handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCNAPI void $closeContainers();

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $handleTakeAmount(::SlotData const&, int, ::SlotData const&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
