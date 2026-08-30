#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/util/CallbackToken.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerScreenContext;
class ItemStack;
class ItemStackNetManagerScreen;
class ItemStackRequestActionHandler;
class ItemStackRequestBatch;
class ItemStackRequestData;
class ServerPlayer;
class TextFilteringProcessor;
template<typename T0> class CallbackTokenContext;
struct ItemStackRequestSlotInfo;
struct ItemStackResponseInfo;
struct LegacySetSlot;
// clang-format on

class ItemStackNetManagerServer : public ::ItemStackNetManagerBase {
public:
    // ItemStackNetManagerServer inner types define
    enum class TextFilterState : int {
        None     = 0,
        Waiting  = 1,
        Timedout = 2,
    };

    using RetainScope = ::gsl::final_action<std::function<void()>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackRequestActionHandler>> mRequestActionHandler;
    ::ll::TypedStorage<1, 1, bool> mRetainSetItemStackNetIdVariants;
    ::ll::TypedStorage<4, 4, ::ItemStackNetManagerServer::TextFilterState> mTextFilterState;
    ::ll::TypedStorage<8, 48, std::queue<std::unique_ptr<ItemStackRequestData>, std::deque<std::unique_ptr<ItemStackRequestData>>>> mRequestsQueue;
    ::ll::UntypedStorage<8, 24> mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, ::Tick> mTextFilterRequestTimer;
    ::ll::TypedStorage<8, 8, ::Tick const> mTextFilterRequestTimeout;
    ::ll::TypedStorage<8, 16, ::CallbackToken> mTextFilterRequestToken;
    ::ll::UntypedStorage<8, 8> mOnContainerScreenCloseCB;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackNetManagerServer& operator=(ItemStackNetManagerServer const&);
    ItemStackNetManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackNetManagerServer();

    virtual ::TypedClientNetId<ItemStackRequestIdTag, int, 0> getRequestId() const;

    virtual bool retainSetItemStackNetIdVariant() const;

    virtual bool allowInventoryTransactionManager() const;

    virtual void onContainerScreenOpen(::ContainerScreenContext const&);

    virtual void _initScreen(::ItemStackNetManagerScreen&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackNetManagerServer(::ServerPlayer&, bool);

    MCNAPI void _handleLegacyTransactionRequest(
        ::TypedClientNetId<ItemStackLegacyRequestIdTag, int, 0> const&,
        std::vector<LegacySetSlot> const&
    );

    MCNAPI void _processQueue();

    MCNAPI void _queueRequest(std::unique_ptr<ItemStackRequestData>);

    MCNAPI void _queueRequests(::ItemStackRequestBatch const&);

    MCNAPI ::gsl::final_action<std::function<void()>> _retainSetItemStackNetIdVariantScope();

    MCNAPI void
        handleRequest(std::unique_ptr<ItemStackRequestData>, ::Bedrock::NonOwnerPointer<TextFilteringProcessor>);

    MCNAPI void handleRequestBatch(::ItemStackRequestBatch const&, ::Bedrock::NonOwnerPointer<TextFilteringProcessor>);

    MCNAPI bool itemMatches(::ItemStackRequestSlotInfo const&, ::ItemStack const&);

    MCNAPI void normalTick();

    MCNAPI void startCrafting(bool, ::BlockPos const&);

    MCNAPI ::CallbackToken tryCloseContainerScreen(std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerPlayer&, bool);
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

    MCNAPI bool $retainSetItemStackNetIdVariant() const;

    MCNAPI bool $allowInventoryTransactionManager() const;

    MCNAPI void $onContainerScreenOpen(::ContainerScreenContext const&);

    MCNAPI void $_initScreen(::ItemStackNetManagerScreen&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
