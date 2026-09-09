#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocalValue.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"
#include "mc/deps/core/utility/pub_sub/PriorityDeferredSubscriptionHub.h"
#include "mc/platform/brstd/move_only_function.h"

namespace Bedrock::PubSub {

class RecursiveFIFODeferredSubscriptionHub : public ::Bedrock::PubSub::PriorityDeferredSubscriptionHub {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mCurrentPriority;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const;

    virtual void _enqueue(::brstd::move_only_function<void ()>, ::Bedrock::PubSub::ConnectPosition, std::optional<int>);

    virtual void _runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&&);
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock::PubSub
