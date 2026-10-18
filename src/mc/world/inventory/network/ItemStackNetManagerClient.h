#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/events/TextProcessingEventOrigin.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/ContainerEnumName.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/FullContainerName.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/ContainerWeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/ClientScratchContainer.h"
#include "mc/world/inventory/network/HistoricPredictionData.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackNetManagerScreen;
class ItemStackRequestAction;
class ItemStackRequestBatch;
class ItemStackRequestData;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
class SparseContainer;
class SparseContainerClient;
#if defined(LL_PLAT_A) // @header-generator platform
struct ItemStackRequestScope;
#else // @header-generator platform
struct FullContainerName;
struct HistoricPredictionData;
struct ItemStackRequestIdTag;
#endif // @header-generator platform
struct ItemStackResponseInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct ItemStackResponseSlotInfo;
#else // @header-generator platform
#endif // @header-generator platform
struct OwnedItemStackRequestScope;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ClientScratchContainer;
#endif // @header-generator platform
// clang-format on

class ItemStackNetManagerClient : public ::ItemStackNetManagerBase {
public:
    // ItemStackNetManagerClient inner types declare
    // clang-format off
    struct PredictiveContainer;
#if defined(LL_PLAT_A) // @header-generator platform
    struct ClientScreenData;
#else // @header-generator platform
#endif // @header-generator platform
    struct OpenSessionContainerData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ClientScreenData;
#endif // @header-generator platform
    struct OwningPredictiveContainer;
    // clang-format on

    // ItemStackNetManagerClient inner types define
    struct PredictiveContainer {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<SparseContainerClient>> mSparseContainer;
        ::ll::UntypedStorage<8, 40>                                       mHistoricPredictions;
        ::ll::UntypedStorage<8, 40>                                       mZeroedOutItems;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SparseContainerClient>> mSparseContainer;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::ItemStackRequestId, ::std::vector<::HistoricPredictionData>>>
            mHistoricPredictions;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::ItemStackRequestId, ::std::vector<::HistoricPredictionData>>>
            mZeroedOutItems;
#endif // @header-generator platform
        // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        PredictiveContainer();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        PredictiveContainer();

#endif
#endif // @header-generator platform
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~PredictiveContainer();
#else // @header-generator platform
        virtual ~PredictiveContainer() = default;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ClientScreenData(::ItemStackNetManagerClient::ClientScreenData&&);

        MCNAPI ::ItemStackNetManagerClient::ClientScreenData&
        operator=(::ItemStackNetManagerClient::ClientScreenData&&);

        MCNAPI ~ClientScreenData();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI PredictiveContainer(
            ::Container&                                     backingContainer,
            ::SparseContainerBackingSetType                  backingSetType,
            bool                                             isItemStackNetManagerEnabled,
            ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
            ::std::unique_ptr<::IPlayerContainerSetter>      playerContainerSetter
        );
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::ItemStackNetManagerClient::ClientScreenData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(
            ::Container&                                     backingContainer,
            ::SparseContainerBackingSetType                  backingSetType,
            bool                                             isItemStackNetManagerEnabled,
            ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
            ::std::unique_ptr<::IPlayerContainerSetter>      playerContainerSetter
        );
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

    struct OpenSessionContainerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::ContainerWeakRef>                               mContainerWeakRef;
        ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient::PredictiveContainer*> mContainer;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ClientScreenData {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        OpenSessionContainerData& operator=(OpenSessionContainerData const&);
        OpenSessionContainerData(OpenSessionContainerData const&);
        OpenSessionContainerData();
#else // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::unordered_set<uchar>>>
            mLegacyTransactionSetItemSlots;
        ::ll::TypedStorage<
            8,
            64,
            ::std::
                unordered_map<::ItemStackRequestId, ::std::vector<::ItemStackNetManagerClient::PredictiveContainer*>>>
                                                                                              mRequestContainers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ClientScratchContainer>>> mClientScratchContainers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ItemStackNetManagerClient::PredictiveContainer>>>
            mPlayerOwnedPredictiveContainers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ItemStackNetManagerClient::PredictiveContainer>>>
            mOpenSessionPredictiveContainers;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<::FullContainerName, ::ItemStackNetManagerClient::OpenSessionContainerData>>
            mOpenSessionContainerMap;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<::FullContainerName, ::ItemStackNetManagerClient::OpenSessionContainerData>>
            mHudContainerMap;
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        ClientScreenData& operator=(ClientScreenData const&);
        ClientScreenData(ClientScreenData const&);
        ClientScreenData();

#endif
#endif // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~OpenSessionContainerData();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI ClientScreenData(::ItemStackNetManagerClient::ClientScreenData&&);

        MCNAPI ::ItemStackNetManagerClient::ClientScreenData&
        operator=(::ItemStackNetManagerClient::ClientScreenData&&);
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
#else // @header-generator platform
        // constructor thunks
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::ItemStackNetManagerClient::ClientScreenData&&);
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

    struct OwningPredictiveContainer : public ::ItemStackNetManagerClient::PredictiveContainer {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mOwnedContainer;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                   mIsHandlingResponse;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackRequestData>>  mRequest;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackRequestBatch>> mRequestBatch;
    ::ll::UntypedStorage<1, 24>                                      mRequestScreen;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                       mIsHandlingResponse;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestData>>  mRequest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestBatch>> mRequestBatch;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                mRequestScreen;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ItemStackNetManagerClient& operator=(ItemStackNetManagerClient const&);
    ItemStackNetManagerClient();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ItemStackNetManagerClient();
#else // @header-generator platform
    virtual ~ItemStackNetManagerClient() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TypedClientNetId<ItemStackRequestIdTag, int, 0> getRequestId() const;
#else // @header-generator platform
    virtual ::SparseContainer* initOpenContainer(
        ::BlockSource&             region,
        ::FullContainerName const& openContainerId,
        ::ContainerWeakRef const&  containerWeakRef
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool allowInventoryTransactionManager() const;
#else // @header-generator platform
    virtual ::ItemStackRequestId getRequestId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SparseContainer* initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);
#else // @header-generator platform
    virtual bool allowInventoryTransactionManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::final_action<std::function<void ()>> _tryBeginClientLegacyTransactionRequest();
#else // @header-generator platform
    virtual ::gsl::final_action<::std::function<void()>> _tryBeginClientLegacyTransactionRequest() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _addLegacyTransactionRequestSetItemSlot(::ItemStackNetManagerScreen&, ::SharedTypes::Legacy::ContainerType, int);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void _addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&,
        ::SharedTypes::Legacy::ContainerType,
        int
    ) /*override*/;
#else // LL_PLAT_C
    virtual void _addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&         screen,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    ) /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _initScreen(::ItemStackNetManagerScreen&);
    // clang-format on
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void _initScreen(::ItemStackNetManagerScreen&) /*override*/;
#else // LL_PLAT_C
    virtual void _initScreen(::ItemStackNetManagerScreen& screen) /*override*/;
#endif

#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void _beginRequest(::ItemStackRequestScreen screen);

    MCNAPI void _clearPredictiveContainerRequest(
        ::ItemStackRequestId const&                       requestId,
        ::ItemStackNetManagerClient::PredictiveContainer& predictiveContainer,
        bool                                              shouldBeEmpty
    );

    MCNAPI ::std::unique_ptr<::ItemStackRequestData> _endTakeRequest();

    MCNAPI ::ItemStackNetManagerClient::ClientScreenData const* _tryGetCurrentClientScreen() const;

    MCNAPI ::ItemStackNetManagerClient::ClientScreenData* _tryGetCurrentClientScreen();

    MCNAPI void addRequestAction(::std::unique_ptr<::ItemStackRequestAction> requestAction);

    MCNAPI ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> getPredictiveContainers();

    MCNAPI void handleItemStackResponse(::std::vector<::ItemStackResponseInfo> const& responses);

    MCNAPI ::OwnedItemStackRequestScope
    tryBeginOwnedRequest(::std::shared_ptr<::ItemStackRequestData> result, ::ItemStackRequestScreen screen);

    MCNAPI void trySendBatch();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TypedClientNetId<ItemStackRequestIdTag, int, 0> $getRequestId() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::SparseContainer* $initOpenContainer(
        ::BlockSource&             region,
        ::FullContainerName const& openContainerId,
        ::ContainerWeakRef const&  containerWeakRef
    );

    MCNAPI ::ItemStackRequestId $getRequestId() const;

    MCNAPI bool $allowInventoryTransactionManager() const;

    MCNAPI ::gsl::final_action<::std::function<void()>> $_tryBeginClientLegacyTransactionRequest();

    MCNAPI void $_addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&         screen,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    );

    MCNAPI void $_initScreen(::ItemStackNetManagerScreen& screen);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowInventoryTransactionManager() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SparseContainer* $initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);

    MCNAPI ::gsl::final_action<std::function<void()>> $_tryBeginClientLegacyTransactionRequest();

    MCNAPI void
    $_addLegacyTransactionRequestSetItemSlot(::ItemStackNetManagerScreen&, ::SharedTypes::Legacy::ContainerType, int);

    MCNAPI void $_initScreen(::ItemStackNetManagerScreen&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
