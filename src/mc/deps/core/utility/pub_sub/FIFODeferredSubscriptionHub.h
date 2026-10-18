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
#if defined(LL_PLAT_A) // @header-generator platform
        MPSCQueue<brstd::move_only_function<void()>, 64, std::allocator<brstd::move_only_function<void()>>, false>;
#else // @header-generator platform
        MPSCQueue<::brstd::move_only_function<void()>, 64, ::std::allocator<::brstd::move_only_function<void()>>, 0>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 560> mQueue;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        560,
        ::Bedrock::MPSCQueue<
            ::brstd::move_only_function<void()>,
            64,
            ::std::allocator<::brstd::move_only_function<void()>>,
            0>>
        mQueue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual void flushPendingEvents();
#else // @header-generator platform
    virtual void flushPendingEvents() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _enqueue(::brstd::move_only_function<void ()>, ::Bedrock::PubSub::ConnectPosition, std::optional<int>);
#else // @header-generator platform
    virtual bool _runOneEvent() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _runOneEvent();
    // clang-format on
#else // @header-generator platform
    virtual void _enqueue(
        ::brstd::move_only_function<void()>,
        ::Bedrock::PubSub::ConnectPosition,
        ::std::optional<int>
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::PubSub
