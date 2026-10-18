#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubscriptionContext() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void to_string(std::string&) = 0;
#else // @header-generator platform
    virtual void to_string(::std::string&) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::PubSub
