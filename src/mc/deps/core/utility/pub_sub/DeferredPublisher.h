#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DeferralType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, ::Bedrock::PubSub::DeferralType T1, typename T2, bool T3, bool T4>
#else // @header-generator platform
template <typename T0, int T1, typename T2, int T3, int T4>
#endif // @header-generator platform
class DeferredPublisher {};

} // namespace Bedrock::PubSub
