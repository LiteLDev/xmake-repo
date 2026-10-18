#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/SubscriptionContext.h"
#include "mc/platform/brstd/move_only_function.h"

#endif // @header-generator platform

namespace Bedrock::PubSub {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class Connector {};
#else // @header-generator platform
using ContextType = std::unique_ptr<SubscriptionContext>;

template <typename Signature>
class Connector {
public:
    using FunctionType = brstd::move_only_function<Signature>;

    template <typename Fn>
    Subscription connect(Fn const& fn, ConnectPosition at, ContextType&& context) {
        return _connectInternal(fn, at, std::move(context), std::nullopt);
    }

protected:
    Connector()          = default;
    virtual ~Connector() = default;

private:
    virtual Subscription
    _connectInternal(FunctionType&& fn, ConnectPosition at, ContextType&& context, std::optional<int> group) = 0;
};
#endif // @header-generator platform

} // namespace Bedrock::PubSub
