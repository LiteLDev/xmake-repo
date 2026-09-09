#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::Detail {

class SignalPublisher {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SignalPublisher() = default;

    virtual void send(void const*) = 0;

    virtual std::function<Bedrock::PubSub::RawSubscription (Bedrock::PubSub::DeferredSubscriptionHub&, int)> getConnectOp(std::function<void (const void*)>&&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<Bedrock::Detail::SignalPublisher> makePublisher(bool, ulong);
    // NOLINTEND
};

} // namespace Bedrock::Detail
