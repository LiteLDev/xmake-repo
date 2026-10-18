#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionHub {
public:
    // DeferredSubscriptionHub inner types define
    enum class HubType : int {
        Priority      = 0,
#if defined(LL_PLAT_A) // @header-generator platform
        FIFO          = 1,
#else // @header-generator platform
        Fifo          = 1,
#endif // @header-generator platform
        RecursiveFIFO = 2,
    };

    using FunctionType = ::brstd::move_only_function<void()>;

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~DeferredSubscriptionHub() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong runDeferredEvents(ulong) = 0;
#else // @header-generator platform
    virtual uint64 runDeferredEvents(uint64 maxToRun) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong runDeferredEventsForDuration(std::chrono::duration<long long, std::ratio<1, 1000>>) = 0;
#else // @header-generator platform
    virtual uint64 runDeferredEventsForDuration(::std::chrono::milliseconds msec) = 0;
#endif // @header-generator platform

    virtual void flushPendingEvents() = 0;

    virtual void clear() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong erase(::Bedrock::PubSub::RawSubscription&) = 0;
#else // @header-generator platform
    virtual uint64 erase(::Bedrock::PubSub::RawSubscription& subscription) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong size() const = 0;
#else // @header-generator platform
    virtual uint64 size() const = 0;
#endif // @header-generator platform

    virtual bool empty() const = 0;

    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _join(::Bedrock::PubSub::DeferredSubscription&&) = 0;
#else // @header-generator platform
    virtual void _join(::Bedrock::PubSub::DeferredSubscription&& subscription) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _enqueue(::brstd::move_only_function<void ()>, ::Bedrock::PubSub::ConnectPosition, std::optional<int>) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void _enqueue(
        ::brstd::move_only_function<void()> fn,
        ::Bedrock::PubSub::ConnectPosition  at,
        ::std::optional<int>                group
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<Bedrock::PubSub::DeferredSubscriptionHub> makePriorityHub();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::Bedrock::PubSub::DeferredSubscriptionHub> makePriorityHub();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::PubSub
