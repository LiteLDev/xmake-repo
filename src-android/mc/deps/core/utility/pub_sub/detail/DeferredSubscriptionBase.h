#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#include "mc/deps/core/utility/pub_sub/detail/SubscriptionBodyBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class SubscriptionContext; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionBase : public ::Bedrock::PubSub::Detail::SubscriptionBodyBase {
public:
    // prevent constructor by default
    DeferredSubscriptionBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ulong runDeferredEvents(ulong) = 0;

    virtual ulong runDeferredEventsForDuration(std::chrono::duration<long long, std::ratio<1, 1000>>) = 0;

    virtual ::Bedrock::PubSub::DeferralType getDeferralType() const = 0;
    // NOLINTEND
};

} // namespace Bedrock::PubSub
