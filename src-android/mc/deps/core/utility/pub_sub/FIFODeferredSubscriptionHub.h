#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPSCQueue.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHubBase.h"
#include "mc/platform/brstd/move_only_function.h"

namespace Bedrock::PubSub {

class FIFODeferredSubscriptionHub : public ::Bedrock::PubSub::DeferredSubscriptionHubBase {
public:
    // FIFODeferredSubscriptionHub inner types define
    using QueueType = ::Bedrock::
        MPSCQueue<brstd::move_only_function<void()>, 64, std::allocator<brstd::move_only_function<void()>>, false>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 560> mQueue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual void flushPendingEvents();

    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const;

    virtual void _enqueue(::brstd::move_only_function<void ()>, ::Bedrock::PubSub::ConnectPosition, std::optional<int>);

    virtual bool _runOneEvent();
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock::PubSub
