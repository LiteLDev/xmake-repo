#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DeferredSubscription.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionHubBase : public ::Bedrock::PubSub::DeferredSubscriptionHub {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::DeferredSubscription>> mSubscriptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredSubscriptionHubBase();

    virtual ulong runDeferredEvents(ulong);

    virtual ulong runDeferredEventsForDuration(std::chrono::duration<long long, std::ratio<1, 1000>>);

    virtual void clear();

    virtual ulong erase(::Bedrock::PubSub::RawSubscription&);

    virtual ulong size() const;

    virtual bool empty() const;

    virtual void _join(::Bedrock::PubSub::DeferredSubscription&&);

    virtual bool _runOneEvent() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ulong $runDeferredEvents(ulong);

    MCNAPI ulong $runDeferredEventsForDuration(std::chrono::duration<long long, std::ratio<1, 1000>>);

    MCNAPI void $clear();

    MCNAPI ulong $erase(::Bedrock::PubSub::RawSubscription&);

    MCNAPI ulong $size() const;

    MCNAPI bool $empty() const;

    MCNAPI void $_join(::Bedrock::PubSub::DeferredSubscription&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
