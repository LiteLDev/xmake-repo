#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerSplitControl.h"
#include "mc/world/containers/managers/controllers/ItemSpecialLocation.h"
#include "mc/world/containers/managers/controllers/ItemTransferType.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"
#include "mc/world/inventory/simulation/ContainerSimulationSplitStack.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Container;
class ContainerController;
class ContainerManagerModel;
class ContainerModel;
class ContainerScreenContext;
class ContainerScreenSimulation;
class ItemInstance;
class ItemStack;
class ItemStackBase;
struct ActorUniqueID;
struct AutoPlaceItem;
struct AutoPlaceRequest;
struct AutoPlaceResult;
struct ContainerScreenActionResult;
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

class ContainerManagerController : public ::std::enable_shared_from_this<ContainerManagerController> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ContainerManagerModel>> mContainerManagerModel;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<ContainerController>>> mContainers;
    ::ll::TypedStorage<8, 24, std::vector<ContainerSplitControl>>         mContainerSplitItemStackItems;
    ::ll::TypedStorage<8, 24, std::vector<ContainerSimulationSplitStack>> mContainerSimulationSplitItemStacks;
    ::ll::TypedStorage<4, 4, int>                                         mSplitItemRemainder;
    ::ll::TypedStorage<1, 1, bool>                                        mContainerDirty;
    ::ll::TypedStorage<1, 1, bool>                                        mContainersClosed;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContainerScreenSimulation>>  mSimulation;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mDynamicContainerNotifier;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContainerManagerController();

    virtual void postInit(std::weak_ptr<ContainerManagerController>);

    virtual void registerContainerCallbacks();

    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const&);

    virtual void setItemName(::Bedrock::Safety::RedactableString const&);

    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const;

    virtual ::Bedrock::Safety::RedactableString const& getItemName() const;

    virtual void updatePreviewItem();

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;

    virtual bool handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    virtual bool handleTakeAll(::SlotData const&, ::SlotData const&);

    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    virtual bool handleTakeHalf(::SlotData const&, ::SlotData const&);

    virtual bool handlePlaceOne(::SlotData const&, ::SlotData const&);

    virtual bool handlePlaceAmount(::SlotData const&, int, ::SlotData const&);

    virtual int handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    virtual int handleAutoPlaceStack(::SlotData const&, ::ItemTakeType, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    virtual void handleSplitSingle(::SlotData const&, ::SlotData const&);

    virtual void handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&);

    virtual void handleSplitMultiple(::SlotData const&, ::ItemInstance const&, ::SlotData const&);

    virtual bool handleCoalesce(::SlotData const&, std::vector<std::string> const&, std::string const&);

    virtual bool handleSwap(::SlotData const&, ::SlotData const&);

    virtual bool handleDrop(::SlotData const&, ::ItemTransferAmount const);

    virtual bool handleDestroy(::SlotData const&, ::ItemTransferAmount const);

    virtual bool handleDestroy(::SelectedSlotInfo const&, ::ItemTransferAmount const);

    virtual bool handleConsume(::SlotData const&, ::ItemTransferAmount const);

    virtual bool handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    virtual void closeContainers();

    virtual bool isOutputSlot(std::string const&) const;

    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    virtual void _onItemTransferredFrom(::ItemInstance const&, ::SlotData const&);

    virtual void _onItemTransferredTo(::ItemInstance const&, ::SlotData const&);

    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);

    virtual void _onItemPlaced(::ItemInstance const&, ::SlotData const&);

    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&);

    virtual void _updateItemStackRequest(::ContainerScreenRequestActionType, ::ContainerScreenActionResult const&, ::ItemStackRequestScope&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<ContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postInit(std::weak_ptr<ContainerManagerController>);

    MCNAPI void $registerContainerCallbacks();

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
    // NOLINTEND
};
