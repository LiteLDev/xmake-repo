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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4> mCurrentPriority;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Bedrock::Threading::InstancedThreadLocalValue<int>> mCurrentPriority;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const /*override*/;
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
    virtual void _runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&&);
    // clang-format on
#else // @header-generator platform
    virtual void
    _runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&& entry) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::PubSub
