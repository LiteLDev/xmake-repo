#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

namespace Bedrock::PubSub {
enum class ReturnPolicyType : int {
    Aggregate = 0,
    Discard   = 1,
};
}
#endif // @header-generator platform
