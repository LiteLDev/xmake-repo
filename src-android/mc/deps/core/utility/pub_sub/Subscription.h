#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/SubscriptionBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class RawSubscription; }
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub {

class Subscription : public ::Bedrock::PubSub::SubscriptionBase {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Subscription& operator=(::Bedrock::PubSub::Subscription&&);

    MCNAPI ~Subscription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
