#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPSCQueue.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHubBase.h"
#include "mc/platform/brstd/move_only_function.h"

namespace Bedrock::PubSub {

class PriorityDeferredSubscriptionHub : public ::Bedrock::PubSub::DeferredSubscriptionHubBase {
public:
    // PriorityDeferredSubscriptionHub inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct QueueEntry;
#else // @header-generator platform
#endif // @header-generator platform
    struct DequeuedEntry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct QueueEntry;
#endif // @header-generator platform
    // clang-format on

    // PriorityDeferredSubscriptionHub inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct QueueEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64>                                  mFunction;
        ::ll::TypedStorage<4, 8, std::optional<int>>                 mGroup;
        ::ll::TypedStorage<4, 4, ::Bedrock::PubSub::ConnectPosition> mPosition;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueueEntry& operator=(QueueEntry const&);
        QueueEntry(QueueEntry const&);
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct DequeuedEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 64> mFunction;
        ::ll::UntypedStorage<4, 16> mOrder;
#else // @header-generator platform
        ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mFunction;
        ::ll::TypedStorage<4, 4, int>                                  mOrder;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        DequeuedEntry& operator=(DequeuedEntry const&);
        DequeuedEntry(DequeuedEntry const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using QueueType = ::Bedrock::MPSCQueue<
        Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry,
        64,
        std::allocator<Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry>,
        false>;
#else // @header-generator platform
    struct QueueEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mFunction;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                 mGroup;
        ::ll::TypedStorage<4, 4, ::Bedrock::PubSub::ConnectPosition>   mPosition;
        // NOLINTEND
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using DequeuedItemsType = std::deque<Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry>;
#else // @header-generator platform
    using DequeuedItemsType = ::std::deque<::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry>;

    using QueueType = ::Bedrock::MPSCQueue<
        ::Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry,
        64,
        ::std::allocator<::Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry>,
        0>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 560> mQueue;
    ::ll::TypedStorage<8, 48, std::deque<Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry>> mDequeuedItems;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        560,
        ::Bedrock::MPSCQueue<
            ::Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry,
            64,
            ::std::allocator<::Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry>,
            0>>
        mQueue;
    ::ll::TypedStorage<8, 40, ::std::deque<::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry>>
        mDequeuedItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PriorityDeferredSubscriptionHub();
#else // @header-generator platform
    virtual void flushPendingEvents() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flushPendingEvents();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const;
#else // @header-generator platform
    virtual bool _runOneEvent() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _enqueue(::brstd::move_only_function<void ()>, ::Bedrock::PubSub::ConnectPosition, std::optional<int>);
#else // @header-generator platform
    virtual void _enqueue(
        ::brstd::move_only_function<void()> fn,
        ::Bedrock::PubSub::ConnectPosition  at,
        ::std::optional<int>                group
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _runOneEvent();

    virtual void _runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void _runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&& entry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flushPendingEvents();
#else // @header-generator platform
    MCAPI void $flushPendingEvents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::DeferredSubscriptionHub::HubType $getHubType() const;
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::DeferredSubscriptionHub::HubType $getHubType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_enqueue(::brstd::move_only_function<void()>, ::Bedrock::PubSub::ConnectPosition, std::optional<int>);
#else // @header-generator platform
    MCAPI bool $_runOneEvent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_runOneEvent();
#else // @header-generator platform
    MCAPI void $_enqueue(
        ::brstd::move_only_function<void()> fn,
        ::Bedrock::PubSub::ConnectPosition  at,
        ::std::optional<int>                group
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $_runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&& entry);
#else // LL_PLAT_C
    MCFOLD void $_runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&& entry);
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
