#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ContainerInteractionStateMachine.h"
#include "mc/client/gui/screens/controllers/BundleHelper.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/client/gui/screens/controllers/InteractionModel.h"
#include "mc/client/gui/screens/controllers/ProgressiveTakeBarLocation.h"
#include "mc/client/gui/screens/controllers/ProgressiveTakeButtonData.h"
#include "mc/client/gui/screens/controllers/TypeInContainer.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/options/UIProfile.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/AutoPlaceItem.h"
#include "mc/world/containers/managers/controllers/ItemStateData.h"
#include "mc/world/item/ItemGroup.h"
#include "mc/world/item/ItemLockAction.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ContainerManagerController;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class UIPropertyBag;
struct ItemTransferAmount;
struct SelectedSlotInfo;
namespace Json { class Value; }
// clang-format on

class ContainerScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEntityUniqueID;
    ::ll::TypedStorage<4, 4, ::TypeInContainer> mTypeInContainer;
    ::ll::UntypedStorage<1, 12> mShowItemCategory;
    ::ll::UntypedStorage<8, 240> mContainerStateMachine;
    ::ll::TypedStorage<8, 32, ::SlotData> mLastStateSlot;
    ::ll::TypedStorage<4, 4, int> mLastPlacedAmount;
    ::ll::TypedStorage<1, 1, bool> mSingleSplit;
    ::ll::TypedStorage<8, 32, ::SlotData> mTouchSplitData;
    ::ll::TypedStorage<8, 136, ::ItemGroup> mSelectedSplitTarget;
    ::ll::TypedStorage<1, 1, bool> mSplitDraggingToPlace;
    ::ll::TypedStorage<1, 1, bool> mPreviousGestureControlEnabled;
    ::ll::TypedStorage<1, 1, bool> mEnterKeyPressedForSplitting;
    ::ll::TypedStorage<1, 1, bool> mArrowKeyPressed;
    ::ll::TypedStorage<8, 88, ::ProgressiveTakeButtonData> mProgressiveTakeButton;
    ::ll::TypedStorage<4, 4, uint> mTouchProgressiveSelectButton;
    ::ll::TypedStorage<8, 24, std::vector<ItemStateData>> mPreviousState;
    ::ll::TypedStorage<8, 24, std::map<std::pair<std::string, int>, std::pair<double, int>>> mFadeInIconData;
    ::ll::TypedStorage<8, 32, ::SlotData> mSelectedSlotData;
    ::ll::TypedStorage<8, 32, ::SlotData> mLastSelectedSlotData;
    ::ll::TypedStorage<8, 32, ::SlotData> mHoveredSlotData;
    ::ll::TypedStorage<1, 1, bool> mShowHoverText;
    ::ll::TypedStorage<1, 1, bool> mHoverTextSuppressedUntilPointerMoves;
    ::ll::TypedStorage<4, 4, int> mHoverTextInitialPointerX;
    ::ll::TypedStorage<4, 4, int> mHoverTextInitialPointerY;
    ::ll::TypedStorage<1, 1, bool> mHoverTextSkipNextGamepadHover;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastHoverTime;
    ::ll::TypedStorage<8, 32, ::SlotData> mStartDraggingSlotData;
    ::ll::TypedStorage<1, 1, bool> mPointerHasMoved;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<std::string>>> mCoalesceOrderMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<AutoPlaceItem>>> mAutoPlaceOrderMap;
    ::ll::TypedStorage<1, 1, bool> mIsHoldingScrolling;
    ::ll::TypedStorage<1, 1, bool> mReadyToVibrate;
    ::ll::TypedStorage<1, 1, bool> mNeedsUpdatedBinds;
    ::ll::TypedStorage<4, 4, int> mStartHeldTime;
    ::ll::TypedStorage<1, 1, bool> mStartDeciding;
    ::ll::TypedStorage<2, 2, short> mLastPointerX;
    ::ll::TypedStorage<2, 2, short> mLastPointerY;
    ::ll::TypedStorage<2, 2, short> mStartDraggingPointerX;
    ::ll::TypedStorage<2, 2, short> mStartDraggingPointerY;
    ::ll::TypedStorage<1, 1, bool> mDecidingSelectionScroll;
    ::ll::TypedStorage<2, 2, short> mSelectionScrollStartX;
    ::ll::TypedStorage<2, 2, short> mSelectionScrollStartY;
    ::ll::TypedStorage<8, 24, std::string> mDraggingCollectionName;
    ::ll::TypedStorage<4, 4, int> mDraggingCollectionIndex;
    ::ll::TypedStorage<8, 24, std::string> mInteractingCollectionName;
    ::ll::TypedStorage<4, 4, int> mInteractingCollectionIndex;
    ::ll::TypedStorage<4, 4, uint> mInteractingButtonId;
    ::ll::TypedStorage<1, 1, bool> mIsDraggingTooFast;
    ::ll::TypedStorage<1, 1, bool> mProgressBarShowing;
    ::ll::TypedStorage<8, 136, ::BundleHelper> mBundleHelper;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag> mDirty;
    ::ll::TypedStorage<1, 1, bool> mStartOutputSlotDeciding;
    ::ll::TypedStorage<8, 24, std::string> mOutputCollectionName;
    ::ll::TypedStorage<4, 4, int> mOutputCollectionIndex;
    ::ll::TypedStorage<4, 4, int> mLastReleaseOutputSlotTime;
    ::ll::TypedStorage<1, 1, bool> mScreenCanBeClosedByServer;
    ::ll::TypedStorage<1, 1, ::ItemLockAction> mDefaultItemLockAction;
    ::ll::TypedStorage<4, 4, ::InteractionModel> mInteractionModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContainerManagerController>> mContainerManagerController;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContainerScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onLeave();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void setAssociatedBlockPos(::BlockPos const&);

    virtual void setAssociatedEntityUniqueID(::ActorUniqueID const);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isContainerScreen() const;

    virtual bool _isStillValid() const;

    virtual bool _getGestureControlEnabled() const;

    virtual std::string _getButtonADescription();

    virtual std::string _getButtonXDescription();

    virtual std::string _getButtonYDescription();

    virtual void _handleTakeHalf(std::string const&, int);

    virtual void _handlePlaceAll(std::string const&, int);

    virtual void _handlePlaceOne(std::string const&, int);

    virtual int _handleTakePlace(std::string const&, int, bool);

    virtual void _handleSelectSlot(std::string const&, int);

    virtual ::SelectedSlotInfo const _getSelectedSlotInfo() const;

    virtual ::SlotData _reevaluateSlotData(::SlotData&&) const;

    virtual ::ui::ViewRequest _onContainerSlotHovered(std::string const&, int);

    virtual ::ui::ViewRequest _onContainerSlotUnhovered(std::string const&, int);

    virtual ::ui::ViewRequest _onContainerSlotSelected(std::string const&, int);

    virtual ::ui::ViewRequest _onContainerSlotPressed(std::string const&, int);

    virtual ::ui::ViewRequest _onHotbarSlotHotkeyUsed(::SlotData const&);

    virtual bool _onTouchScrollStartedWithSelectedSlot();

    virtual bool _shouldSwap(std::string const&, int, std::string const&, int) const;

    virtual bool _isTargetSwappable(std::string const&, int) const;

    virtual std::string _getCollectionName(::UIPropertyBag*) const;

    virtual bool _canSplit(std::string const&) const;

    virtual void _sendFlyingItem(::ItemStackBase const&, std::string const&, int, std::string const&, int, ::FadeInIconBehavior);

    virtual ::ItemStackBase const& _getVisualItemStackImpl(std::string const&, int) const;

    virtual void _registerCoalesceOrder() = 0;

    virtual void _registerAutoPlaceOrder() = 0;

    virtual void _createItemLockNotification(::ItemLockAction const);

    virtual ::ProgressiveTakeBarLocation _getProgressiveBarDirection(std::string const&, int) const;

    virtual bool _isInCreativeContainer(std::string const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerScreenController(std::shared_ptr<ClientInstanceScreenModel>, ::InteractionModel);

    MCNAPI bool _canProgressiveTakeFromCollection() const;

    MCNAPI void _compareStatesForFlyingItems();

    MCNAPI int _getCollectionIndex(::UIPropertyBag*) const;

    MCNAPI ::ItemGroup const& _getCursorSelectedItemGroup() const;

    MCNAPI std::string _getFormattedHoverTextForItem(::ItemStackBase const&) const;

    MCNAPI ::InteractionModel _getInteractionModel() const;

    MCNAPI ::ItemStack const& _getItemStack(std::string const&, int) const;

    MCNAPI std::vector<AutoPlaceItem>& _getReservedAutoPlaceOrder(::ContainerEnumName, ulong);

    MCNAPI std::vector<std::string>& _getReservedCoalesceOrder(::ContainerEnumName, ulong);

    MCNAPI ::ItemStackBase const& _getSelectedItemStackBase() const;

    MCNAPI ::ItemStackBase const& _getTakeableItemStackBase(std::string const&, int) const;

    MCNAPI ::ItemStackBase const& _getVisualItemStack(std::string const&, int) const;

    MCNAPI void _handleAddAllToCursor(std::string const&, int);

    MCNAPI void _handleAutoPlace(int, std::string const&, int);

    MCNAPI void _handleDropItem(std::string const&, int, ::ItemTransferAmount);

    MCNAPI void _handleDropSelectedItem(::ItemTransferAmount);

    MCNAPI void _handleSplit(std::string const&, int);

    MCNAPI void _handleTakeAll(std::string const&, int);

    MCNAPI void _handleTakeAmount(int, std::string const&, int);

    MCNAPI void _handleUnselectSlot();

    MCNAPI bool _hasItems(std::string const&, int) const;

    MCNAPI bool _hasSelectedSlot() const;

    MCNAPI bool _isCursorSelectedActive() const;

    MCNAPI bool _isExpandoItem(std::string const&, int) const;

    MCNAPI bool _isIdle() const;

    MCNAPI bool _isInValidCraftingResultContainer(std::string_view, int) const;

    MCNAPI bool _isOutputSlot(std::string const&) const;

    MCNAPI bool _isSelectedSlot(std::string const&, int) const;

    MCNAPI bool _moveItemFromSlotIntoStorageItem(std::string const&, int, ::ItemStack const&);

    MCNAPI void _playSound(::SharedTypes::Legacy::LevelSoundEvent);

    MCNAPI void _postSetSelectedSlot(::SelectedSlotInfo const&, bool, bool, ::ItemLockAction const);

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlersForStateMachine(uint);

    MCNAPI void _registerSingleTouchOutputSlot(::ContainerEnumName);

    MCNAPI void _registerStateMachine();

    MCNAPI void _registerTouchHoldEventHandlersForStateMachine(uint);

    MCNAPI void _saveCurrentContainerState();

    MCNAPI void _setDefaultItemLockAction(::ItemLockAction const);

    MCNAPI void _showSelectedItemDetailsPopup(::ItemStackBase const&);

    MCNAPI void _stopSplitting();

    MCNAPI bool _usingGamepadScheme() const;

    MCNAPI bool _usingTouchScheme() const;

    MCNAPI std::vector<AutoPlaceItem> const* tryGetAutoPlaceOrder(std::string const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isInRecipeContainer(std::string const&);

    MCNAPI static ::InteractionModel interactionModelFromUIProfile(::UIProfile);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SlotData const& mCursorSlotData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::InteractionModel);
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

    MCNAPI void $onLeave();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $setAssociatedBlockPos(::BlockPos const&);

    MCNAPI void $setAssociatedEntityUniqueID(::ActorUniqueID const);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI bool $_isContainerScreen() const;

    MCNAPI bool $_isStillValid() const;

    MCNAPI bool $_getGestureControlEnabled() const;

    MCNAPI std::string $_getButtonADescription();

    MCNAPI std::string $_getButtonXDescription();

    MCNAPI std::string $_getButtonYDescription();

    MCNAPI void $_handleTakeHalf(std::string const&, int);

    MCNAPI void $_handlePlaceAll(std::string const&, int);

    MCNAPI void $_handlePlaceOne(std::string const&, int);

    MCNAPI int $_handleTakePlace(std::string const&, int, bool);

    MCNAPI void $_handleSelectSlot(std::string const&, int);

    MCNAPI ::SelectedSlotInfo const $_getSelectedSlotInfo() const;

    MCNAPI ::SlotData $_reevaluateSlotData(::SlotData&&) const;

    MCNAPI ::ui::ViewRequest $_onContainerSlotHovered(std::string const&, int);

    MCNAPI ::ui::ViewRequest $_onContainerSlotUnhovered(std::string const&, int);

    MCNAPI ::ui::ViewRequest $_onContainerSlotSelected(std::string const&, int);

    MCNAPI ::ui::ViewRequest $_onContainerSlotPressed(std::string const&, int);

    MCNAPI ::ui::ViewRequest $_onHotbarSlotHotkeyUsed(::SlotData const&);

    MCNAPI bool $_onTouchScrollStartedWithSelectedSlot();

    MCNAPI bool $_shouldSwap(std::string const&, int, std::string const&, int) const;

    MCNAPI bool $_isTargetSwappable(std::string const&, int) const;

    MCNAPI std::string $_getCollectionName(::UIPropertyBag*) const;

    MCNAPI bool $_canSplit(std::string const&) const;

    MCNAPI void
    $_sendFlyingItem(::ItemStackBase const&, std::string const&, int, std::string const&, int, ::FadeInIconBehavior);

    MCNAPI ::ItemStackBase const& $_getVisualItemStackImpl(std::string const&, int) const;

    MCNAPI void $_createItemLockNotification(::ItemLockAction const);

    MCNAPI ::ProgressiveTakeBarLocation $_getProgressiveBarDirection(std::string const&, int) const;

    MCNAPI bool $_isInCreativeContainer(std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
