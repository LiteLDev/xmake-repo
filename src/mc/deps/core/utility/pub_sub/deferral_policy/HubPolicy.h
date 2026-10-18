#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#include "mc/deps/core/utility/pub_sub/deferred/SubscriptionBody.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
// clang-format on

#endif // @header-generator platform
namespace Bedrock::PubSub::DeferralPolicy {

#if defined(LL_PLAT_A) // @header-generator platform
class HubPolicy {};
#else // @header-generator platform
class HubPolicy {
public:
    // HubPolicy inner types declare
    // clang-format off
    template<typename T0> class SubscriptionBodyImpl;
    // clang-format on

    // HubPolicy inner types define
    template <typename T0>
    class SubscriptionBodyImpl {};
};
#endif // @header-generator platform

} // namespace Bedrock::PubSub::DeferralPolicy
