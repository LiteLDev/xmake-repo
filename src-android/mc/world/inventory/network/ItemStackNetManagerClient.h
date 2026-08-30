#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/ContainerWeakRef.h"
#include "mc/world/inventory/network/ClientScratchContainer.h"
#include "mc/world/inventory/network/HistoricPredictionData.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/ItemStackRequestScreen.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Container;
class ContainerModel;
class EntityContext;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
class ItemStack;
class ItemStackNetManagerScreen;
class ItemStackRequestAction;
class ItemStackRequestBatch;
class ItemStackRequestData;
class Player;
class SparseContainer;
class SparseContainerClient;
struct ItemStackRequestScope;
struct ItemStackResponseInfo;
struct ItemStackResponseSlotInfo;
struct OwnedItemStackRequestScope;
// clang-format on

class ItemStackNetManagerClient : public ::ItemStackNetManagerBase {
public:
    // ItemStackNetManagerClient inner types declare
    // clang-format off
    struct PredictiveContainer;
    struct ClientScreenData;
    struct OpenSessionContainerData;
    struct OwningPredictiveContainer;
    // clang-format on

    // ItemStackNetManagerClient inner types define
    struct PredictiveContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<SparseContainerClient>> mSparseContainer;
        ::ll::UntypedStorage<8, 40>                                       mHistoricPredictions;
        ::ll::UntypedStorage<8, 40>                                       mZeroedOutItems;
        // NOLINTEND

    public:
        // prevent constructor by default
        PredictiveContainer();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PredictiveContainer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct ClientScreenData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::unordered_set<uchar>>> mLegacyTransactionSetItemSlots;
        ::ll::UntypedStorage<8, 40> mRequestContainers;
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ClientScratchContainer>>> mClientScratchContainers;
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ItemStackNetManagerClient::PredictiveContainer>>> mPlayerOwnedPredictiveContainers;
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ItemStackNetManagerClient::PredictiveContainer>>> mOpenSessionPredictiveContainers;
        ::ll::TypedStorage<8, 40, std::unordered_map<FullContainerName, ItemStackNetManagerClient::OpenSessionContainerData>> mOpenSessionContainerMap;
        ::ll::TypedStorage<8, 40, std::unordered_map<FullContainerName, ItemStackNetManagerClient::OpenSessionContainerData>> mHudContainerMap;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientScreenData& operator=(ClientScreenData const&);
        ClientScreenData(ClientScreenData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ClientScreenData(::ItemStackNetManagerClient::ClientScreenData&&);

        MCNAPI ::ItemStackNetManagerClient::ClientScreenData&
        operator=(::ItemStackNetManagerClient::ClientScreenData&&);

        MCNAPI ~ClientScreenData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ItemStackNetManagerClient::ClientScreenData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct OpenSessionContainerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::ContainerWeakRef>                               mContainerWeakRef;
        ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient::PredictiveContainer*> mContainer;
        // NOLINTEND

    public:
        // prevent constructor by default
        OpenSessionContainerData& operator=(OpenSessionContainerData const&);
        OpenSessionContainerData(OpenSessionContainerData const&);
        OpenSessionContainerData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~OpenSessionContainerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct OwningPredictiveContainer : public ::ItemStackNetManagerClient::PredictiveContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<ContainerModel>> mOwnedContainer;
        // NOLINTEND

    public:
        // prevent constructor by default
        OwningPredictiveContainer();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~OwningPredictiveContainer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    ::ll::TypedStorage<1, 1, bool>                                   mIsHandlingResponse;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackRequestData>>  mRequest;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackRequestBatch>> mRequestBatch;
    ::ll::UntypedStorage<1, 24>                                      mRequestScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackNetManagerClient& operator=(ItemStackNetManagerClient const&);
    ItemStackNetManagerClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ItemStackNetManagerClient();

    virtual ::TypedClientNetId<ItemStackRequestIdTag, int, 0> getRequestId() const;

    virtual bool allowInventoryTransactionManager() const;

    virtual ::SparseContainer* initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);

    virtual ::gsl::final_action<std::function<void ()>> _tryBeginClientLegacyTransactionRequest();

    virtual void _addLegacyTransactionRequestSetItemSlot(::ItemStackNetManagerScreen&, ::SharedTypes::Legacy::ContainerType, int);

    virtual void _initScreen(::ItemStackNetManagerScreen&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackNetManagerClient(::Player&, bool);

    MCNAPI void _beginRequest(::ItemStackRequestScreen);

    MCNAPI void _clearPredictiveContainerRequest(
        ::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&,
        ::ItemStackNetManagerClient::PredictiveContainer&,
        bool
    );

    MCNAPI void _endRequest();

    MCNAPI std::unique_ptr<ItemStackRequestData> _endTakeRequest();

    MCNAPI ::TypedClientNetId<ItemStackLegacyRequestIdTag, int, 0> _getLegacyTransactionRequest() const;

    MCNAPI std::unordered_map<ContainerEnumName, std::unordered_set<uchar>> _getLegacyTransactionSetItemSlots() const;

    MCNAPI ::ItemStackNetManagerClient::ClientScreenData const* _tryGetCurrentClientScreen() const;

    MCNAPI ::ItemStackNetManagerClient::ClientScreenData* _tryGetCurrentClientScreen();

    MCNAPI void addContainerToRequest(::TypedClientNetId<ItemStackRequestIdTag, int, 0>, ::Container*);

    MCNAPI void addRequestAction(std::unique_ptr<ItemStackRequestAction>);

    MCNAPI int addRequestToFilterString(std::string const&, ::TextProcessingEventOrigin const);

    MCNAPI void
    cacheHistoricPrediction(::Container*, ::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&, int, ::ItemStack&&);

    MCNAPI void
    cacheZeroedOutItem(::Container*, ::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&, int, ::ItemStack&&);

    MCNAPI void clearZeroedOutItem(::Container*, ::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&, int);

    MCNAPI std::unordered_map<FullContainerName, std::shared_ptr<Container>> getPredictiveContainers();

    MCNAPI void handleItemStackResponse(std::vector<ItemStackResponseInfo> const&);

    MCNAPI bool hasActiveRequest() const;

    MCNAPI ::OwnedItemStackRequestScope
        tryBeginOwnedRequest(std::shared_ptr<ItemStackRequestData>, ::ItemStackRequestScreen);

    MCNAPI ::ItemStackRequestScope tryBeginRequest();

    MCNAPI void trySendBatch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::TypedClientNetId<ItemStackRequestIdTag, int, 0> $getRequestId() const;

    MCNAPI bool $allowInventoryTransactionManager() const;

    MCNAPI ::SparseContainer* $initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);

    MCNAPI ::gsl::final_action<std::function<void()>> $_tryBeginClientLegacyTransactionRequest();

    MCNAPI void
    $_addLegacyTransactionRequestSetItemSlot(::ItemStackNetManagerScreen&, ::SharedTypes::Legacy::ContainerType, int);

    MCNAPI void $_initScreen(::ItemStackNetManagerScreen&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
