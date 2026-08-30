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
    struct QueueEntry;
    struct DequeuedEntry;
    // clang-format on

    // PriorityDeferredSubscriptionHub inner types define
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

    struct DequeuedEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mFunction;
        ::ll::UntypedStorage<4, 16> mOrder;
        // NOLINTEND

    public:
        // prevent constructor by default
        DequeuedEntry& operator=(DequeuedEntry const&);
        DequeuedEntry(DequeuedEntry const&);
    };

    using QueueType = ::Bedrock::MPSCQueue<
        Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry,
        64,
        std::allocator<Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry>,
        false>;

    using DequeuedItemsType = std::deque<Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 560> mQueue;
    ::ll::TypedStorage<8, 48, std::deque<Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry>> mDequeuedItems;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PriorityDeferredSubscriptionHub();

    virtual void flushPendingEvents();

    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const;

    virtual void _enqueue(::brstd::move_only_function<void ()>, ::Bedrock::PubSub::ConnectPosition, std::optional<int>);

    virtual bool _runOneEvent();

    virtual void _runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $flushPendingEvents();

    MCNAPI ::Bedrock::PubSub::DeferredSubscriptionHub::HubType $getHubType() const;

    MCNAPI void $_enqueue(::brstd::move_only_function<void()>, ::Bedrock::PubSub::ConnectPosition, std::optional<int>);

    MCNAPI bool $_runOneEvent();

    MCNAPI void $_runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
