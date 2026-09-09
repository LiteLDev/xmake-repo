#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#include "mc/deps/core/utility/pub_sub/SubscriptionBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscription : public ::Bedrock::PubSub::SubscriptionBase {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeferredSubscription();

    MCNAPI ::Bedrock::PubSub::DeferredSubscription& operator=(::Bedrock::PubSub::DeferredSubscription&&);

    MCNAPI ulong runDeferredEvents(ulong);

    MCNAPI ~DeferredSubscription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
