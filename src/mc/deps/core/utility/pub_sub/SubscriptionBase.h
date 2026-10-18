#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub { class SubscriptionContext; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub {

class SubscriptionBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>> mBody;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>> mBody;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void disconnect();
#else // @header-generator platform
    MCAPI void disconnect();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void disconnect_async();
#else // @header-generator platform
    MCAPI void disconnect_async();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::PubSub
