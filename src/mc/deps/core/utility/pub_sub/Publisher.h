#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/detail/DispatchingPublisherBase.h"
#include "mc/deps/core/utility/pub_sub/detail/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/detail/SubscriptionBody.h"
#endif // @header-generator platform

namespace Bedrock::PubSub {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename T1, ::Bedrock::PubSub::ReturnPolicyType T2>
class Publisher {};
#else // @header-generator platform
// For the compatibility with auto generated headers
template <auto Policy>
struct ReturnPolicyTraits {
    static constexpr ReturnPolicyType value = static_cast<ReturnPolicyType>(Policy);

    static_assert(value == ReturnPolicyType::Aggregate || value == ReturnPolicyType::Discard, "Invalid return policy");
};

template <typename Signature, typename ThreadingModel, auto PolicyType = ReturnPolicyType::Aggregate>
class Publisher : public Detail::DispatchingPublisherBase<
                      ThreadingModel,
                      Detail::SubscriptionBody<Signature, ReturnPolicyTraits<PolicyType>::value>>,
                  public Connector<Signature> {
public:
    Publisher()                            = default;
    Publisher(Publisher&&) noexcept        = default;
    ~Publisher() override                  = default;
    Publisher(Publisher const&)            = delete;
    Publisher& operator=(Publisher const&) = delete;

private:
    using FunctionType = Connector<Signature>::FunctionType;
    Subscription
    _connectInternal(FunctionType&& fn, ConnectPosition at, ContextType&& context, std::optional<int> group) override;
};

template <typename Signature, typename ThreadingModel>
using PublisherPtr = std::unique_ptr<Publisher<Signature, ThreadingModel>>;
#endif // @header-generator platform

} // namespace Bedrock::PubSub
