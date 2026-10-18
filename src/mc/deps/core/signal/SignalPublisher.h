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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~SignalPublisher() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(void const*) = 0;
#else // @header-generator platform
    virtual void send(void const* data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::function<Bedrock::PubSub::RawSubscription (Bedrock::PubSub::DeferredSubscriptionHub&, int)> getConnectOp(std::function<void (const void*)>&&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)>
    getConnectOp(::std::function<void(void const*)>&& handler) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<Bedrock::Detail::SignalPublisher> makePublisher(bool, ulong);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::unique_ptr<::Bedrock::Detail::SignalPublisher>
    makePublisher(bool isWrapped, uint64 unwrappedSize);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Detail
