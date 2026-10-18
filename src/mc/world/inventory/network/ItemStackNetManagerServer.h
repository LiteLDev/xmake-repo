#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/events/TextProcessingEventOrigin.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/CallbackToken.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/util/CallbackTokenContext.h"
#endif // @header-generator platform
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerScreenContext;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackNetManagerScreen;
class ItemStackRequestActionHandler;
class ItemStackRequestBatch;
class ItemStackRequestData;
class ServerPlayer;
class TextFilteringProcessor;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename T0> class CallbackTokenContext;
struct ItemStackRequestSlotInfo;
struct ItemStackResponseInfo;
#else // @header-generator platform
struct ItemStackLegacyRequestIdTag;
struct ItemStackRequestIdTag;
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    using RetainScope = ::gsl::final_action<std::function<void()>>;
#else // @header-generator platform
    using RetainScope = ::gsl::final_action<::std::function<void()>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestActionHandler>> mRequestActionHandler;
    ::ll::TypedStorage<1, 1, bool>                                               mRetainSetItemStackNetIdVariants;
    ::ll::TypedStorage<4, 4, ::ItemStackNetManagerServer::TextFilterState>       mTextFilterState;
    ::ll::TypedStorage<
        8,
        40,
        ::std::
            queue<::std::unique_ptr<::ItemStackRequestData>, ::std::deque<::std::unique_ptr<::ItemStackRequestData>>>>
                                                                                    mRequestsQueue;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>> mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, ::Tick>                                                mTextFilterRequestTimer;
    ::ll::TypedStorage<8, 8, ::Tick const>                                          mTextFilterRequestTimeout;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                                      mTextFilterRequestToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CallbackTokenContext<::std::function<void()>>>>
        mOnContainerScreenCloseCB;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ItemStackNetManagerServer& operator=(ItemStackNetManagerServer const&);
#else // @header-generator platform
#endif // @header-generator platform
    ItemStackNetManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemStackNetManagerServer();
#else // @header-generator platform
    virtual ~ItemStackNetManagerServer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TypedClientNetId<ItemStackRequestIdTag, int, 0> getRequestId() const;
#else // @header-generator platform
    virtual ::ItemStackRequestId getRequestId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool retainSetItemStackNetIdVariant() const;
#else // @header-generator platform
    virtual bool retainSetItemStackNetIdVariant() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool allowInventoryTransactionManager() const;
#else // @header-generator platform
    virtual bool allowInventoryTransactionManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onContainerScreenOpen(::ContainerScreenContext const&);
#else // @header-generator platform
    virtual void onContainerScreenOpen(::ContainerScreenContext const& screenContext) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _initScreen(::ItemStackNetManagerScreen&);
#else // @header-generator platform
    virtual void _initScreen(::ItemStackNetManagerScreen& screen) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackNetManagerServer(::ServerPlayer&, bool);
#else // @header-generator platform
    MCAPI ItemStackNetManagerServer(::ServerPlayer& serverPlayer, bool isEnabled);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleLegacyTransactionRequest(
        ::TypedClientNetId<ItemStackLegacyRequestIdTag, int, 0> const&,
        std::vector<LegacySetSlot> const&
#else // @header-generator platform
    MCAPI void _handleLegacyTransactionRequest(
        ::ItemStackLegacyRequestId const&     legacyClientRequestId,
        ::std::vector<::LegacySetSlot> const& legacySetItemSlots
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _processQueue();
#else // @header-generator platform
    MCAPI void _processQueue();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _queueRequest(std::unique_ptr<ItemStackRequestData>);
#else // @header-generator platform
    MCAPI void _queueRequest(::std::unique_ptr<::ItemStackRequestData> request);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _queueRequests(::ItemStackRequestBatch const&);
#else // @header-generator platform
    MCAPI void handleRequest(
        ::std::unique_ptr<::ItemStackRequestData>            request,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> textFilteringProcessor
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::final_action<std::function<void()>> _retainSetItemStackNetIdVariantScope();
#else // @header-generator platform
    MCAPI void handleRequestBatch(
        ::ItemStackRequestBatch const&                       requestBatch,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> textFilteringProcessor
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
        handleRequest(std::unique_ptr<ItemStackRequestData>, ::Bedrock::NonOwnerPointer<TextFilteringProcessor>);
#else // @header-generator platform
    MCAPI void normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handleRequestBatch(::ItemStackRequestBatch const&, ::Bedrock::NonOwnerPointer<TextFilteringProcessor>);

    MCNAPI bool itemMatches(::ItemStackRequestSlotInfo const&, ::ItemStack const&);

    MCNAPI void normalTick();

    MCNAPI void startCrafting(bool, ::BlockPos const&);

    MCNAPI ::CallbackToken tryCloseContainerScreen(std::function<void()>);
#else // @header-generator platform
    MCAPI ::CallbackToken tryCloseContainerScreen(::std::function<void()> onContainerScreenCloseCB);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerPlayer&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ServerPlayer& serverPlayer, bool isEnabled);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TypedClientNetId<ItemStackRequestIdTag, int, 0> $getRequestId() const;
#else // @header-generator platform
    MCAPI ::ItemStackRequestId $getRequestId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $retainSetItemStackNetIdVariant() const;
#else // @header-generator platform
    MCAPI bool $retainSetItemStackNetIdVariant() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowInventoryTransactionManager() const;
#else // @header-generator platform
    MCAPI bool $allowInventoryTransactionManager() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onContainerScreenOpen(::ContainerScreenContext const&);
#else // @header-generator platform
    MCAPI void $onContainerScreenOpen(::ContainerScreenContext const& screenContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initScreen(::ItemStackNetManagerScreen&);
#else // @header-generator platform
    MCAPI void $_initScreen(::ItemStackNetManagerScreen& screen);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
