#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#include "mc/deps/core/utility/pub_sub/detail/SubscriptionBodyBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class SubscriptionContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub {

class DeferredSubscriptionBase : public ::Bedrock::PubSub::Detail::SubscriptionBodyBase {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    DeferredSubscriptionBase();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong runDeferredEvents(ulong) = 0;
#else // @header-generator platform
    virtual uint64 runDeferredEvents(uint64) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong runDeferredEventsForDuration(std::chrono::duration<long long, std::ratio<1, 1000>>) = 0;
#else // @header-generator platform
    virtual uint64 runDeferredEventsForDuration(::std::chrono::milliseconds) = 0;
#endif // @header-generator platform

    virtual ::Bedrock::PubSub::DeferralType getDeferralType() const = 0;
    // NOLINTEND
};

} // namespace Bedrock::PubSub
