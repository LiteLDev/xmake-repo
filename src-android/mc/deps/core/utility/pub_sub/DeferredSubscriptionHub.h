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
        FIFO          = 1,
        RecursiveFIFO = 2,
    };

    using FunctionType = ::brstd::move_only_function<void()>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DeferredSubscriptionHub() = default;

    virtual ulong runDeferredEvents(ulong) = 0;

    virtual ulong runDeferredEventsForDuration(std::chrono::duration<long long, std::ratio<1, 1000>>) = 0;

    virtual void flushPendingEvents() = 0;

    virtual void clear() = 0;

    virtual ulong erase(::Bedrock::PubSub::RawSubscription&) = 0;

    virtual ulong size() const = 0;

    virtual bool empty() const = 0;

    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const = 0;

    virtual void _join(::Bedrock::PubSub::DeferredSubscription&&) = 0;

    virtual void _enqueue(::brstd::move_only_function<void ()>, ::Bedrock::PubSub::ConnectPosition, std::optional<int>) = 0;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<Bedrock::PubSub::DeferredSubscriptionHub> makePriorityHub();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
