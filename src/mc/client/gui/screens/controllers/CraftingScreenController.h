#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/client/gui/screens/controllers/RepeatCraftButtonData.h"
#include "mc/client/social/IToastListener.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemCraftType.h"
#include "mc/world/containers/controllers/ItemPlaceType.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"
#include "mc/world/inventory/InventoryLeftTabPocketIndex.h"
#include "mc/world/inventory/InventoryRightTabIndex.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class CraftingContainerManagerController;
class ItemStackBase;
class Player;
class ToastMessage;
class UIPropertyBag;
struct ActorUniqueID;
struct AutoPlaceResult;
namespace Json { class Value; }
// clang-format on

class CraftingScreenController : public ::ContainerScreenController, public ::IToastListener {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/client/gui/screens/controllers/RepeatCraftButtonData.h"
#include "mc/client/social/IToastListener.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemCraftType.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class CraftingContainerManagerController;
class ItemStackBase;
class Player;
class ToastMessage;
class UIPropertyBag;
struct ActorUniqueID;
struct AutoPlaceResult;
namespace Json { class Value; }
// clang-format on

class CraftingScreenController : public ::ContainerScreenController, public ::IToastListener {
#else // @header-generator platform
class CraftingScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // CraftingScreenController inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct ScrollItemData;
#else // @header-generator platform
#endif // @header-generator platform
    struct CategoryTabInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ScrollItemData;
#endif // @header-generator platform
    // clang-format on

    // CraftingScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ScrollItemData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::SlotData> mSlot;
        ::ll::TypedStorage<4, 4, int>         mNumExpandedItems;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct CategoryTabInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::InventoryLeftTabIndex>             tabIndex;
        ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory> category;
        ::ll::TypedStorage<1, 1, ::ContainerEnumName>                 container;
        ::ll::TypedStorage<8, 32, ::std::string>                      tabName;
        // NOLINTEND
    };
#else // @header-generator platform
    struct CategoryTabInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct CategoryTabInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::InventoryLeftTabIndex>             tabIndex;
        ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory> category;
        ::ll::TypedStorage<1, 1, ::ContainerEnumName>                 container;
        ::ll::TypedStorage<8, 24, std::string>                        tabName;
        // NOLINTEND

    public:
        // prevent constructor by default
        CategoryTabInfo& operator=(CategoryTabInfo const&);
        CategoryTabInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                      mDirty;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CraftingContainerManagerController>> mCraftingContainerManagerController;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                          mDelayedSearchString;
    ::ll::TypedStorage<1, 1, bool>                                                 mWorkbench;
    ::ll::TypedStorage<1, 1, bool>                                                 mPocket;
    ::ll::TypedStorage<1, 1, bool>                                                 mCraftableFilterOn;
    ::ll::TypedStorage<4, 4, ::CraftingType>                                       mCraftingType;
    ::ll::TypedStorage<1, 1, bool>                                                 mEntered;
    ::ll::TypedStorage<4, 4, int>                                                  mLayout;
    ::ll::TypedStorage<4, 4, int>                                                  mSavedLayout;
    ::ll::TypedStorage<4, 4, int>                                                  mCurrentlySelectedIndex;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                     mCurrentlySelectedItem;
    ::ll::TypedStorage<1, 1, bool>                                                 mNeedReselectRecipeIndex;
    ::ll::TypedStorage<1, 1, bool>                                                 mCanReselectRecipeIndex;
    ::ll::TypedStorage<1, 1, bool>                                                 mIngredientSetChanged;
    ::ll::TypedStorage<1, 1, bool>                                                 mNeedFirstTabSelection;
    ::ll::TypedStorage<1, 1, bool>                                                 mNeedDefaultFocusSet;
    ::ll::TypedStorage<1, 1, bool>                                                 mSearchBarSelected;
    ::ll::TypedStorage<1, 1, bool>                                                 mCanCreativeHotbarSwap;
    ::ll::TypedStorage<1, 1, bool>                                                 mRecipeLocked;
    ::ll::TypedStorage<1, 1, bool>                                                 mUseRecipeUnlocking;
    ::ll::TypedStorage<4, 4, int>                                                  mFocusRestorationContextSelectedTab;
    ::ll::TypedStorage<8, 32, ::SlotData>                                          mFocusRestorationContext;
    ::ll::TypedStorage<8, 24, std::string>                                         mRepeatCollectionName;
    ::ll::TypedStorage<4, 4, int>                                                  mRepeatCollectionIndex;
    ::ll::TypedStorage<4, 4, int>                                                  mRepeatCraftStartTime;
    ::ll::TypedStorage<4, 4, int>                                                  mRepeatCraftLoopStartTime;
    ::ll::TypedStorage<8, 40, ::CraftingScreenController::ScrollItemData>          mNeedToScrollToItem;
    ::ll::TypedStorage<8, 136, ::RepeatCraftButtonData>                            mRepeatCraftButton;
    ::ll::TypedStorage<4, 4, int>                                                  mTabFiltersDirty;
    ::ll::TypedStorage<4, 4, int>                                                  mSelectedLeftTab;
    ::ll::TypedStorage<4, 4, int>                                                  mSelectedRightTab;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::string>>                mRecipeHoverTextCache;
    ::ll::TypedStorage<1, 1, bool>                                                 mRecipeHoverTextCacheShowCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CraftingScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onTerminate();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual void onEntered();

    virtual bool _isStillValid() const;

    virtual std::string _getButtonADescription();

    virtual std::string _getButtonBDescription();

    virtual std::string _getButtonXDescription();

    virtual std::string _getButtonYDescription();

    virtual void _handlePlaceAll(std::string const&, int);

    virtual void _handlePlaceOne(std::string const&, int);

    virtual void _handleSelectSlot(std::string const&, int);

    virtual ::SlotData _reevaluateSlotData(::SlotData&&) const;

    virtual ::ui::ViewRequest _onContainerSlotHovered(std::string const&, int);

    virtual ::ui::ViewRequest _onContainerSlotPressed(std::string const&, int);

    virtual bool _onTouchScrollStartedWithSelectedSlot();

    virtual bool _shouldSwap(std::string const&, int, std::string const&, int) const;

    virtual bool _isTargetSwappable(std::string const&, int) const;

    virtual std::string _getCollectionName(::UIPropertyBag*) const;

    virtual void _sendFlyingItem(::ItemStackBase const&, std::string const&, int, std::string const&, int, ::FadeInIconBehavior);

    virtual ::ItemStackBase const& _getVisualItemStackImpl(std::string const&, int) const;

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();

    virtual bool _isInCreativeContainer(std::string const&) const;

    virtual void showToast(::ToastMessage, bool);

    virtual void removeToast();

    virtual void refreshToast();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftingScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const,
        ::CraftingType
    );

    MCNAPI bool _currentItemIsSelected(std::string const&, int) const;

    MCNAPI void _cycleLayout(int);

    MCNAPI void _evacuateCraftingGrid();

    MCNAPI int _findNextLeftSideInventoryTab(int) const;

    MCNAPI void _focusCollectionItem(std::string const&, int, bool);

    MCNAPI void _handleCraftItem(::ItemCraftType);

    MCNAPI void _handleRecipeSelect(std::string const&, int, bool);

    MCNAPI bool _isConstructionTabVisible() const;

    MCNAPI bool _isEquipmentTabVisible() const;

    MCNAPI bool _isItemsTabVisible() const;

    MCNAPI bool _isNatureTabVisible() const;

    MCNAPI ::ui::ViewRequest _recipeAutoCraft(std::string const&, int, ::ItemCraftType);

    MCNAPI void _refreshFilters(::InventoryLeftTabIndex, bool);

    MCNAPI void _registerStateMachine();

    MCNAPI void _savePlayerInventoryOptions();

    MCNAPI void _sendActiveLayoutInfo();

    MCNAPI void _setLeftSideInventoryTab(int, bool);

    MCNAPI std::string _tabIndexToCollectionName(::InventoryLeftTabIndex) const;

    MCNAPI int _tryAutoPlaceItemIntoContainer(
        ::SlotData const&,
        ::ItemTakeType,
        ::ContainerEnumName,
        std::vector<AutoPlaceResult>&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addStaticScreenVars(::Json::Value&, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& RECIPE_BOOK_COLLECTION_NAME();

    MCNAPI static std::vector<CraftingScreenController::CategoryTabInfo> const& mCategoryTabs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const,
        ::CraftingType
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
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onTerminate();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI void $onEntered();

    MCNAPI bool $_isStillValid() const;

    MCNAPI std::string $_getButtonADescription();

    MCNAPI std::string $_getButtonBDescription();

    MCNAPI std::string $_getButtonXDescription();

    MCNAPI std::string $_getButtonYDescription();

    MCNAPI void $_handlePlaceAll(std::string const&, int);

    MCNAPI void $_handlePlaceOne(std::string const&, int);

    MCNAPI void $_handleSelectSlot(std::string const&, int);

    MCNAPI ::SlotData $_reevaluateSlotData(::SlotData&&) const;

    MCNAPI ::ui::ViewRequest $_onContainerSlotHovered(std::string const&, int);

    MCNAPI ::ui::ViewRequest $_onContainerSlotPressed(std::string const&, int);

    MCNAPI bool $_onTouchScrollStartedWithSelectedSlot();

    MCNAPI bool $_shouldSwap(std::string const&, int, std::string const&, int) const;

    MCNAPI bool $_isTargetSwappable(std::string const&, int) const;

    MCNAPI std::string $_getCollectionName(::UIPropertyBag*) const;

    MCNAPI void
    $_sendFlyingItem(::ItemStackBase const&, std::string const&, int, std::string const&, int, ::FadeInIconBehavior);

    MCNAPI ::ItemStackBase const& $_getVisualItemStackImpl(std::string const&, int) const;

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();

    MCNAPI bool $_isInCreativeContainer(std::string const&) const;

    MCNAPI void $showToast(::ToastMessage, bool);

    MCNAPI void $removeToast();

    MCNAPI void $refreshToast();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ScrollItemData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::SlotData> mSlot;
        ::ll::TypedStorage<4, 4, int>         mNumExpandedItems;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag> mDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CraftingContainerManagerController>>
                                                                          mCraftingContainerManagerController;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>             mDelayedSearchString;
    ::ll::TypedStorage<1, 1, bool>                                        mWorkbench;
    ::ll::TypedStorage<1, 1, bool>                                        mPocket;
    ::ll::TypedStorage<1, 1, bool>                                        mCraftableFilterOn;
    ::ll::TypedStorage<4, 4, ::CraftingType>                              mCraftingType;
    ::ll::TypedStorage<1, 1, bool>                                        mEntered;
    ::ll::TypedStorage<4, 4, int>                                         mLayout;
    ::ll::TypedStorage<4, 4, int>                                         mSavedLayout;
    ::ll::TypedStorage<4, 4, int>                                         mCurrentlySelectedIndex;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                            mCurrentlySelectedItem;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedReselectRecipeIndex;
    ::ll::TypedStorage<1, 1, bool>                                        mCanReselectRecipeIndex;
    ::ll::TypedStorage<1, 1, bool>                                        mIngredientSetChanged;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedFirstTabSelection;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedDefaultFocusSet;
    ::ll::TypedStorage<1, 1, bool>                                        mSearchBarSelected;
    ::ll::TypedStorage<1, 1, bool>                                        mCanCreativeHotbarSwap;
    ::ll::TypedStorage<1, 1, bool>                                        mRecipeLocked;
    ::ll::TypedStorage<1, 1, bool>                                        mUseRecipeUnlocking;
    ::ll::TypedStorage<4, 4, int>                                         mFocusRestorationContextSelectedTab;
    ::ll::TypedStorage<8, 40, ::SlotData>                                 mFocusRestorationContext;
    ::ll::TypedStorage<8, 32, ::std::string>                              mRepeatCollectionName;
    ::ll::TypedStorage<4, 4, int>                                         mRepeatCollectionIndex;
    ::ll::TypedStorage<4, 4, int>                                         mRepeatCraftStartTime;
    ::ll::TypedStorage<4, 4, int>                                         mRepeatCraftLoopStartTime;
    ::ll::TypedStorage<8, 48, ::CraftingScreenController::ScrollItemData> mNeedToScrollToItem;
    ::ll::TypedStorage<8, 136, ::RepeatCraftButtonData>                   mRepeatCraftButton;
    ::ll::TypedStorage<4, 4, int>                                         mTabFiltersDirty;
    ::ll::TypedStorage<4, 4, int>                                         mSelectedLeftTab;
    ::ll::TypedStorage<4, 4, int>                                         mSelectedRightTab;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::string>>   mRecipeHoverTextCache;
    ::ll::TypedStorage<1, 1, bool>                                        mRecipeHoverTextCacheShowCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onEntered() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void showToast(::ToastMessage message, bool animateIn) /*override*/;

    virtual void removeToast() /*override*/;

    virtual void refreshToast() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _handlePlaceAll(::std::string const& collectionName, int index) /*override*/;

    virtual void _handlePlaceOne(::std::string const& collectionName, int index) /*override*/;

    virtual void _handleSelectSlot(::std::string const& collectionName, int collectionIndex) /*override*/;

    virtual ::ItemStackBase const&
    _getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual ::std::string _getButtonBDescription() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::std::string _getButtonYDescription() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotHovered(::std::string const& collectionName, int index) /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotPressed(::std::string const& collectionName, int index) /*override*/;

    virtual bool _onTouchScrollStartedWithSelectedSlot() /*override*/;

    virtual ::std::string _getCollectionName(::UIPropertyBag* bag) const /*override*/;

    virtual ::SlotData _reevaluateSlotData(::SlotData&& slotData) const /*override*/;

    virtual bool _shouldSwap(
        ::std::string const& collectionName,
        int                  collectionIndex,
        ::std::string const& otherCollectionName,
        int                  otherCollectionIndex
    ) const /*override*/;

    virtual bool _isTargetSwappable(::std::string const& otherCollectionName, int otherCollectionIndex) const
        /*override*/;

    virtual void _sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    ) /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual bool _isInCreativeContainer(::std::string const& containerName) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CraftingScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId,
        ::CraftingType                                 craftingType
    );

    MCAPI bool _currentItemIsSelected(::std::string const& collectionName, int collectionIndex) const;

    MCAPI void _cycleLayout(int dir);

    MCAPI void _evacuateCraftingGrid();

    MCAPI int _findNextLeftSideInventoryTab(int dir) const;

    MCAPI void _focusCollectionItem(::std::string const& collectionName, int collectionIndex, bool forceFocus);

    MCAPI void _handleCraftItem(::ItemCraftType);

    MCAPI void _handleRecipeSelect(::std::string const& collectionName, int collectionIndex, bool displayOnly);

    MCAPI bool _isConstructionTabVisible() const;

    MCAPI bool _isEquipmentTabVisible() const;

    MCAPI bool _isItemsTabVisible() const;

    MCAPI bool _isNatureTabVisible() const;

    MCAPI bool _isRecipeSlotCraftable(::SlotData const& slotData);

    MCAPI ::ui::ViewRequest
    _recipeAutoCraft(::std::string const& collectionName, int collectionIndex, ::ItemCraftType craftType);

    MCAPI void _refreshFilters(::InventoryLeftTabIndex tab, bool forceRefresh);

    MCAPI void _savePlayerInventoryOptions();

    MCAPI void _sendActiveLayoutInfo();

    MCAPI void _setLeftSideInventoryTab(int tabIndex, bool saveOptions);

    MCAPI ::std::string _tabIndexToCollectionName(::InventoryLeftTabIndex index) const;

    MCAPI int _tryAutoPlaceItemIntoContainer(
        ::SlotData const&                 srcSlot,
        ::ItemTakeType                    type,
        ::ContainerEnumName               containerName,
        ::std::vector<::AutoPlaceResult>& autoPlaceResults
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addStaticScreenVars(::Json::Value& globalVars, bool pocket);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::CraftingScreenController::CategoryTabInfo> const& mCategoryTabs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId,
        ::CraftingType                                 craftingType
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onEntered();

    MCAPI void $onTerminate();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $showToast(::ToastMessage message, bool animateIn);

    MCAPI void $removeToast();

    MCAPI void $refreshToast();

    MCAPI bool $_isStillValid() const;

    MCAPI void $_handlePlaceAll(::std::string const& collectionName, int index);

    MCAPI void $_handlePlaceOne(::std::string const& collectionName, int index);

    MCAPI void $_handleSelectSlot(::std::string const& collectionName, int collectionIndex);

    MCAPI ::ItemStackBase const&
    $_getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const;

    MCAPI ::std::string $_getButtonADescription();

    MCAPI ::std::string $_getButtonBDescription();

    MCAPI ::std::string $_getButtonXDescription();

    MCAPI ::std::string $_getButtonYDescription();

    MCAPI ::ui::ViewRequest $_onContainerSlotHovered(::std::string const& collectionName, int index);

    MCAPI ::ui::ViewRequest $_onContainerSlotPressed(::std::string const& collectionName, int index);

    MCAPI bool $_onTouchScrollStartedWithSelectedSlot();

    MCAPI ::std::string $_getCollectionName(::UIPropertyBag* bag) const;

    MCAPI ::SlotData $_reevaluateSlotData(::SlotData&& slotData) const;

    MCAPI bool $_shouldSwap(
        ::std::string const& collectionName,
        int                  collectionIndex,
        ::std::string const& otherCollectionName,
        int                  otherCollectionIndex
    ) const;

    MCAPI bool $_isTargetSwappable(::std::string const& otherCollectionName, int otherCollectionIndex) const;

    MCAPI void $_sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    );

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCAPI bool $_isInCreativeContainer(::std::string const& containerName) const;
    // NOLINTEND
#else // @header-generator platform
    struct ScrollItemData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
