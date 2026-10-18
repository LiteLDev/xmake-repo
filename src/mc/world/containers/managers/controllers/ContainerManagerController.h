#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/managers/controllers/ContainerSplitControl.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/managers/controllers/ItemSpecialLocation.h"
#include "mc/world/containers/managers/controllers/ItemTransferType.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/simulation/ContainerSimulationSplitStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class Container;
class ContainerController;
class ContainerManagerModel;
class ContainerModel;
#if defined(LL_PLAT_A) // @header-generator platform
class ContainerScreenContext;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerScreenSimulation;
class ItemInstance;
class ItemStack;
class ItemStackBase;
struct ActorUniqueID;
struct AutoPlaceItem;
#if defined(LL_PLAT_A) // @header-generator platform
struct AutoPlaceRequest;
#else // @header-generator platform
#endif // @header-generator platform
struct AutoPlaceResult;
struct ContainerScreenActionResult;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ContainerSimulationSplitStack;
struct ContainerSplitControl;
#endif // @header-generator platform
struct ContainerValidationSlotData;
struct CreateContainerItemScope;
struct FullContainerName;
struct ItemStackRequestScope;
struct ItemStateData;
struct ItemTransferAmount;
struct ItemTransferRequest;
struct SelectedSlotInfo;
struct SlotData;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ContainerManagerController : public ::std::enable_shared_from_this<ContainerManagerController> {
#else // @header-generator platform
class ContainerManagerController : public ::std::enable_shared_from_this<::ContainerManagerController> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<ContainerManagerModel>> mContainerManagerModel;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<ContainerController>>> mContainers;
    ::ll::TypedStorage<8, 24, std::vector<ContainerSplitControl>>         mContainerSplitItemStackItems;
    ::ll::TypedStorage<8, 24, std::vector<ContainerSimulationSplitStack>> mContainerSimulationSplitItemStacks;
    ::ll::TypedStorage<4, 4, int>                                         mSplitItemRemainder;
    ::ll::TypedStorage<1, 1, bool>                                        mContainerDirty;
    ::ll::TypedStorage<1, 1, bool>                                        mContainersClosed;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContainerScreenSimulation>>  mSimulation;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mDynamicContainerNotifier;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerManagerModel>> mContainerManagerModel;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::ContainerController>>>
                                                                              mContainers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerSplitControl>>         mContainerSplitItemStackItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerSimulationSplitStack>> mContainerSimulationSplitItemStacks;
    ::ll::TypedStorage<4, 4, int>                                             mSplitItemRemainder;
    ::ll::TypedStorage<1, 1, bool>                                            mContainerDirty;
    ::ll::TypedStorage<1, 1, bool>                                            mContainersClosed;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerScreenSimulation>>  mSimulation;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mDynamicContainerNotifier;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ContainerManagerController();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerManagerController();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ContainerManagerController();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~ContainerManagerController() = default;
#else // LL_PLAT_C
    virtual ~ContainerManagerController();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postInit(std::weak_ptr<ContainerManagerController>);
#else // @header-generator platform
    virtual void postInit(::std::weak_ptr<::ContainerManagerController> self);
#endif // @header-generator platform

    virtual void registerContainerCallbacks();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItemName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    virtual void setItemName(::Bedrock::Safety::RedactableString const& name);
#endif // @header-generator platform

    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const;

    virtual ::Bedrock::Safety::RedactableString const& getItemName() const;

    virtual void updatePreviewItem();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;
#else // @header-generator platform
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleTakeAmount(::SlotData const&, int, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleTakeAll(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleTakeHalf(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handlePlaceOne(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handlePlaceAmount(::SlotData const&, int, ::SlotData const&);
#else // @header-generator platform
    virtual bool handlePlaceAmount(::SlotData const& srcSlot, int amount, ::SlotData const& dstSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);
#else // @header-generator platform
    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int handleAutoPlaceStack(::SlotData const&, ::ItemTakeType, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);
#else // @header-generator platform
    virtual int handleAutoPlaceStack(
        ::SlotData const&                     srcSlot,
        ::ItemTakeType                        takeType,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleSplitSingle(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual void handleSplitSingle(::SlotData const& srcSlot, ::SlotData const& dstSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&);
#else // @header-generator platform
    virtual void
    handleSplitMultiple(::SlotData const& selected, ::ItemInstance const& itemTemplate, ::SlotData const& dstSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleSplitMultiple(::SlotData const&, ::ItemInstance const&, ::SlotData const&);
#else // @header-generator platform
    virtual void handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleCoalesce(::SlotData const&, std::vector<std::string> const&, std::string const&);
#else // @header-generator platform
    virtual bool handleCoalesce(
        ::SlotData const&                   dstSlot,
        ::std::vector<::std::string> const& coalesceOrder,
        ::std::string const&                coalesceSrc
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleSwap(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleSwap(::SlotData const& slotA, ::SlotData const& slotB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleDrop(::SlotData const&, ::ItemTransferAmount const);
#else // @header-generator platform
    virtual bool handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleDestroy(::SlotData const&, ::ItemTransferAmount const);
#else // @header-generator platform
    virtual bool handleDestroy(::SelectedSlotInfo const& selected, ::ItemTransferAmount const transferAmount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleDestroy(::SelectedSlotInfo const&, ::ItemTransferAmount const);
#else // @header-generator platform
    virtual bool handleDestroy(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleConsume(::SlotData const&, ::ItemTransferAmount const);
#else // @header-generator platform
    virtual bool handleConsume(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);
#else // @header-generator platform
    virtual bool handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);
#endif // @header-generator platform

    virtual void closeContainers();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isOutputSlot(std::string const&) const;
#else // @header-generator platform
    virtual bool isOutputSlot(::std::string const& collectionName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);
#else // @header-generator platform
    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onItemTransferredFrom(::ItemInstance const&, ::SlotData const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);
#else // LL_PLAT_C
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onItemTransferredTo(::ItemInstance const&, ::SlotData const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void _onItemTransferredFrom(::ItemInstance const&, ::SlotData const&);
#else // LL_PLAT_C
    virtual void _onItemTransferredFrom(::ItemInstance const& stack, ::SlotData const& srcSlot);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void _onItemTransferredTo(::ItemInstance const&, ::SlotData const&);
#else // LL_PLAT_C
    virtual void _onItemTransferredTo(::ItemInstance const& stack, ::SlotData const& dstSlot);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onItemPlaced(::ItemInstance const&, ::SlotData const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);
#else // LL_PLAT_C
    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void _onItemPlaced(::ItemInstance const&, ::SlotData const&);
#else // LL_PLAT_C
    virtual void _onItemPlaced(::ItemInstance const& stack, ::SlotData const& dstSlot);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _updateItemStackRequest(::ContainerScreenRequestActionType, ::ContainerScreenActionResult const&, ::ItemStackRequestScope&);
    // clang-format on
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&);
#else // LL_PLAT_C
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const& result);
#endif

#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ContainerManagerController(std::weak_ptr<ContainerManagerModel>);

    MCNAPI void _addContainer(std::shared_ptr<ContainerController>);

    MCNAPI void _addOutputsAsDestinations(::ContainerScreenActionResult const&, std::vector<AutoPlaceResult>&) const;

    MCNAPI int _appendAutoPlaceOutputs(
        ::ItemTransferRequest&,
        ::ItemStackBase const&,
        int,
        std::vector<AutoPlaceItem> const&,
        int
    );

    MCNAPI void _autoPlaceOrDrop(::SlotData const&, ::ItemTransferAmount, std::vector<AutoPlaceItem> const&);

    MCNAPI int _buildAutoPlaceRequest(
        ::SlotData const&,
        ::ItemTransferAmount,
        std::vector<AutoPlaceItem> const&,
        ::ItemTransferRequest&
    );

    MCNAPI void _buildContainerControllers();

    MCNAPI int _bulkAutoPlaceOutput(
        int,
        int,
        ::ItemInstance,
        ::SlotData const&,
        std::vector<AutoPlaceItem> const&,
        std::vector<AutoPlaceResult>&
    );

    MCNAPI ::AutoPlaceRequest const
    _canAutoPlace(::SlotData const&, ::ItemTransferAmount, std::vector<AutoPlaceItem> const&);

    MCNAPI bool _canCraftIntoStorageItem(::ItemInstance const&, ::ItemStack const&);

    MCNAPI void _clearCreativeHotbar();

    MCNAPI void _closeContainers(::ContainerManagerModel&);

    MCNAPI std::shared_ptr<ContainerController> _getContainerController(::SlotData const&) const;

    MCNAPI ::ContainerValidationSlotData _getContainerValidationSlotData(::SlotData const&) const;

    MCNAPI ::ItemStack const& _getItem(::SlotData const&, bool) const;

    MCNAPI ::ItemStack const& _getItem0(::ContainerEnumName) const;

    MCNAPI std::tuple<const ItemStack&, std::shared_ptr<ContainerController>>
           _getItemAndContainerController(::SlotData const&, bool) const;

    MCNAPI std::unordered_map<FullContainerName, std::shared_ptr<Container>> _getPredictiveContainers();

    MCNAPI ::ContainerScreenContext _getScreenContext() const;

    MCNAPI ::SlotData _getSlotData(::ContainerValidationSlotData const&) const;

    MCNAPI bool _handleAutoPlace(::ItemTransferRequest const&);

    MCNAPI void _handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&);

    MCNAPI bool _isContainerSimulationEnabled() const;

    MCNAPI void
    _onItemTransferring(::ItemStack const&, ::SlotData const&, ::ContainerModel*, ::SlotData const&, ::ContainerModel*);

    MCNAPI void _onTransfer(::ContainerScreenActionResult const&);

    MCNAPI void _playCraftingSound(std::weak_ptr<ContainerManagerModel> const&, ::SharedTypes::Legacy::LevelSoundEvent);

    MCNAPI void _registerSetThisDirtyCallback(std::shared_ptr<ContainerModel>);

    MCNAPI ::ContainerCategory _resolveToRealSourceSlot(::ContainerModel*, ::SlotData const&, ::SlotData&) const;

    MCNAPI void _returnToPlayerOrDrop(::SlotData const&, ::ItemTransferAmount);

    MCNAPI void _shiftLeftStorageItemContents(std::string const&, int, std::vector<ItemStack> const&);

    MCNAPI bool
    _transfer(::ItemTransferType const, ::SlotData const&, ::SlotData const&, ::ItemTransferAmount const, bool, bool);

    MCNAPI bool _transferAll(::ItemTransferType const, ::SlotData const&, ::SlotData const&);

    MCNAPI bool _transferSpecial(::SlotData const&, ::ItemTransferAmount const, ::ItemSpecialLocation);

    MCNAPI ::ItemStackRequestScope _tryBeginItemStackRequest(::ContainerManagerModel const*);

    MCNAPI void _updateItemStackRequest(::ContainerScreenActionResult const&, ::ItemStackRequestScope&);

    MCNAPI bool _updatePreviewItem(::ItemInstance&, ::ItemInstance const&, std::string const&);

    MCNAPI bool blockHasCustomName(::BlockPos const&) const;

    MCNAPI bool getAndResetContainerDirty();

    MCNAPI std::string getBlockName(::BlockPos const&) const;

    MCNAPI std::shared_ptr<ContainerController> getContainerController(std::string const&) const;

    MCNAPI std::shared_ptr<ContainerController> getContainerController(::ContainerEnumName) const;

    MCNAPI std::weak_ptr<ContainerManagerModel> getContainerManagerModel();

    MCNAPI std::weak_ptr<ContainerModel> getContainerModel(std::string const&) const;

    MCNAPI int getContainerSize(std::string const&) const;

    MCNAPI ::SharedTypes::Legacy::ContainerType getContainerType() const;

    MCNAPI void getCurrentContainerStateList(std::vector<ItemStateData>&);

    MCNAPI std::shared_ptr<ContainerModel> getDynamicContainerModel(::FullContainerName const&);

    MCNAPI std::string getEntityName(::ActorUniqueID const&) const;

    MCNAPI std::string getExpandoGroupName(std::string const&, int) const;

    MCNAPI ::ContainerExpandStatus getExpandoStatus(std::string const&, int) const;

    MCNAPI ::ItemStack const& getItemStack(::SlotData const&) const;

    MCNAPI ::ItemStack const& getItemStack(std::string const&, int) const;

    MCNAPI bool handleMoveItemFromSlotIntoStorageItem(::SlotData const&, ::ItemStack const&, std::optional<uchar>);

    MCNAPI bool handleMoveSelectedItemFromStorageItem(::ItemStack const&, int, ::SlotData const&);

    MCNAPI bool handleMoveSelectedItemFromStorageItemToStorageItem(::ItemStack const&, int, ::ItemStack const&);

    MCNAPI bool handleMoveTopItemFromStorageItem(::ItemStack const&, ::SlotData const&);

    MCNAPI bool hasContainerController(std::string const&) const;

    MCNAPI bool isExpandoItem(std::string const&, int);

    MCNAPI bool isItemFiltered(std::vector<std::string> const, ::ItemStackBase const&) const;

    MCNAPI bool isValid(float);

    MCNAPI bool playerHasRoomForItem(::ItemInstance const&) const;

    MCNAPI void resetSplitStack();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& TRANSFER_NO_DESTINATION();

    MCNAPI static std::string_view const& TRANSFER_NO_ORIGIN();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit ContainerManagerController(::std::weak_ptr<::ContainerManagerModel> containerManagerModel);

    MCAPI void _addContainer(::std::shared_ptr<::ContainerController> uiContainer);

    MCAPI void _addOutputsAsDestinations(
        ::ContainerScreenActionResult const& result,
        ::std::vector<::AutoPlaceResult>&    destinations
    ) const;

    MCAPI int _appendAutoPlaceOutputs(
        ::ItemTransferRequest&                request,
        ::ItemStackBase const&                itemToPlace,
        int                                   requestAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        int                                   placementGroup
    );

    MCAPI void _autoPlaceOrDrop(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder
    );

    MCAPI int _buildAutoPlaceRequest(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  requestTakeAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::ItemTransferRequest&                request
    );

    MCAPI int _bulkAutoPlaceOutput(
        int                                   craftableCount,
        int                                   amount,
        ::ItemInstance                        outputItem,
        ::SlotData const&                     srcSlot,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCAPI bool _canCraftIntoStorageItem(::ItemInstance const& itemToCraft, ::ItemStack const& storageItem);

    MCAPI void _clearCreativeHotbar();

    MCAPI void _closeContainers(::ContainerManagerModel& containerModel);

    MCAPI ::ContainerValidationSlotData _getContainerValidationSlotData(::SlotData const& slotData) const;

    MCAPI ::ItemStack const& _getItem(::SlotData const& slot, bool canBeEmpty) const;

    MCAPI ::ItemStack const& _getItem0(::ContainerEnumName collectionEnumName) const;

    MCAPI ::std::tuple<::ItemStack const&, ::std::shared_ptr<::ContainerController>>
    _getItemAndContainerController(::SlotData const& slot, bool canBeEmpty) const;

    MCAPI ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> _getPredictiveContainers();

    MCAPI ::SlotData _getSlotData(::ContainerValidationSlotData const& containerValidationSlotData) const;

    MCAPI bool _handleAutoPlace(::ItemTransferRequest const& request);

    MCAPI void _handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    MCAPI bool _isContainerSimulationEnabled() const;

    MCAPI void _onItemTransferring(
        ::ItemStack const& stack,
        ::SlotData const&  srcSlot,
        ::ContainerModel*  srcModel,
        ::SlotData const&  dstSlot,
        ::ContainerModel*  dstModel
    );

    MCAPI void _onTransfer(::ContainerScreenActionResult const& result);

    MCAPI void _playCraftingSound(
        ::std::weak_ptr<::ContainerManagerModel> const& containerManagerModel,
        ::SharedTypes::Legacy::LevelSoundEvent          soundEvent
    );

    MCAPI void _registerSetThisDirtyCallback(::std::shared_ptr<::ContainerModel> containerModel);

    MCAPI ::ContainerCategory
    _resolveToRealSourceSlot(::ContainerModel* srcModel, ::SlotData const& srcSlot, ::SlotData& realSrcSlot) const;

    MCAPI void _returnToPlayerOrDrop(::SlotData const& srcSlot, ::ItemTransferAmount amount);

    MCAPI void _shiftLeftStorageItemContents(
        ::std::string const&              collectionName,
        int                               selectedItemIdx,
        ::std::vector<::ItemStack> const& items
    );

    MCAPI bool _transfer(
        ::ItemTransferType   transferType,
        ::SlotData const&    dstSlot,
        ::SlotData const&    srcSlot,
        ::ItemTransferAmount transferAmount,
        bool                 allowSwap,
        bool                 allowVisualOnlySameItemSwap
    );

    MCAPI bool _transferSpecial(
        ::SlotData const&          srcSlot,
        ::ItemTransferAmount const transferAmount,
        ::ItemSpecialLocation      location
    );

    MCAPI ::ItemStackRequestScope _tryBeginItemStackRequest(::ContainerManagerModel const* managerModel);

    MCAPI void
    _updateItemStackRequest(::ContainerScreenActionResult const& result, ::ItemStackRequestScope& requestScope);

    MCAPI bool
    _updatePreviewItem(::ItemInstance& previewItem, ::ItemInstance const& newItem, ::std::string const& collectionName);

    MCAPI bool blockHasCustomName(::BlockPos const& blockPos) const;

    MCAPI ::std::string getBlockName(::BlockPos const& blockPos) const;

    MCAPI ::std::shared_ptr<::ContainerController> getContainerController(::ContainerEnumName containerEnumName) const;

    MCAPI ::std::shared_ptr<::ContainerController> getContainerController(::std::string const& containerName) const;

    MCAPI int getContainerSize(::std::string const& collectionName) const;

    MCAPI ::SharedTypes::Legacy::ContainerType getContainerType() const;

    MCAPI void getCurrentContainerStateList(::std::vector<::ItemStateData>& inventoryState);

    MCAPI ::std::shared_ptr<::ContainerModel> getDynamicContainerModel(::FullContainerName const& name);

    MCAPI ::std::string getEntityName(::ActorUniqueID const& entityUniqueID) const;

    MCAPI ::std::string getExpandoGroupName(::std::string const& collectionName, int collectionIndex) const;

    MCAPI ::ContainerExpandStatus getExpandoStatus(::std::string const& containerName, int collectionIndex) const;

    MCAPI ::ItemStack const& getItemStack(::std::string const& collectionName, int collectionIndex) const;

    MCAPI bool handleMoveItemFromSlotIntoStorageItem(
        ::SlotData const&      srcSlot,
        ::ItemStack const&     dstStorageItem,
        ::std::optional<uchar> requestedAmount
    );

    MCAPI bool handleMoveSelectedItemFromStorageItem(
        ::ItemStack const& srcStorageItem,
        int                selectedItemIdx,
        ::SlotData const&  dstSlot
    );

    MCAPI bool handleMoveSelectedItemFromStorageItemToStorageItem(
        ::ItemStack const& srcStorageItem,
        int                selectedItemIdx,
        ::ItemStack const& dstStorageItem
    );

    MCAPI bool handleMoveTopItemFromStorageItem(::ItemStack const& srcStorageItem, ::SlotData const& dstSlot);

    MCAPI bool hasContainerController(::std::string const& containerName) const;

    MCAPI bool isExpandoItem(::std::string const& collectionName, int collectionIndex);

    MCAPI bool isItemFiltered(::std::vector<::std::string> containerNames, ::ItemStackBase const& item) const;

    MCAPI bool playerHasRoomForItem(::ItemInstance const& item) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::weak_ptr<ContainerManagerModel>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::weak_ptr<::ContainerManagerModel> containerManagerModel);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postInit(std::weak_ptr<ContainerManagerController>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void $postInit(::std::weak_ptr<::ContainerManagerController> self);

    MCAPI void $registerContainerCallbacks();

    MCFOLD void $setPreviewItemName(::Bedrock::Safety::RedactableString const& name);

    MCFOLD void $setItemName(::Bedrock::Safety::RedactableString const& name);

    MCFOLD ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCFOLD ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCFOLD void $updatePreviewItem();

    MCAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCAPI bool $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCAPI bool $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCAPI bool $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCAPI bool $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCAPI bool $handlePlaceAmount(::SlotData const& srcSlot, int amount, ::SlotData const& dstSlot);

    MCAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCAPI int $handleAutoPlaceStack(
        ::SlotData const&                     srcSlot,
        ::ItemTakeType                        takeType,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCAPI void $handleSplitSingle(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCAPI void
    $handleSplitMultiple(::SlotData const& selected, ::ItemInstance const& itemTemplate, ::SlotData const& dstSlot);

    MCAPI void $handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    MCAPI bool $handleCoalesce(
        ::SlotData const&                   dstSlot,
        ::std::vector<::std::string> const& coalesceOrder,
        ::std::string const&                coalesceSrc
    );

    MCAPI bool $handleSwap(::SlotData const& slotA, ::SlotData const& slotB);

    MCAPI bool $handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCAPI bool $handleDestroy(::SelectedSlotInfo const& selected, ::ItemTransferAmount const transferAmount);

    MCAPI bool $handleDestroy(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCAPI bool $handleConsume(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCAPI bool $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    MCAPI void $closeContainers();

    MCFOLD bool $isOutputSlot(::std::string const& collectionName) const;

    MCFOLD void $_updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    );

    MCAPI ::CreateContainerItemScope
    $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);

    MCAPI void $_onItemTransferredFrom(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCAPI void $_onItemTransferredTo(::ItemInstance const& stack, ::SlotData const& dstSlot);

    MCFOLD void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCFOLD void $_onItemPlaced(::ItemInstance const& stack, ::SlotData const& dstSlot);

    MCFOLD void $_onContainerScreenAction(::ContainerScreenActionResult const& result);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerContainerCallbacks();
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPreviewItemName(::Bedrock::Safety::RedactableString const&);

    MCNAPI void $setItemName(::Bedrock::Safety::RedactableString const&);

    MCNAPI ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCNAPI void $updatePreviewItem();

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const&) const;

    MCNAPI bool $handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    MCNAPI bool $handleTakeAll(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    MCNAPI bool $handleTakeHalf(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handlePlaceOne(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handlePlaceAmount(::SlotData const&, int, ::SlotData const&);

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

    MCNAPI void $handleSplitMultiple(::SlotData const&, ::ItemInstance const&, ::SlotData const&);

    MCNAPI bool $handleCoalesce(::SlotData const&, std::vector<std::string> const&, std::string const&);

    MCNAPI bool $handleSwap(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handleDrop(::SlotData const&, ::ItemTransferAmount const);

    MCNAPI bool $handleDestroy(::SlotData const&, ::ItemTransferAmount const);

    MCNAPI bool $handleDestroy(::SelectedSlotInfo const&, ::ItemTransferAmount const);

    MCNAPI bool $handleConsume(::SlotData const&, ::ItemTransferAmount const);

    MCNAPI bool $handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    MCNAPI void $closeContainers();

    MCNAPI bool $isOutputSlot(std::string const&) const;

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    MCNAPI void $_onItemTransferredFrom(::ItemInstance const&, ::SlotData const&);

    MCNAPI void $_onItemTransferredTo(::ItemInstance const&, ::SlotData const&);

    MCNAPI void $_onItemAcquired(::ItemInstance const&, ::SlotData const&);

    MCNAPI void $_onItemPlaced(::ItemInstance const&, ::SlotData const&);

    MCNAPI void $_onContainerScreenAction(::ContainerScreenActionResult const&);

    MCNAPI void $_updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
