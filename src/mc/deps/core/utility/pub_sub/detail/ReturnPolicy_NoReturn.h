#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
struct ReturnPolicy_NoReturn {};
#else // @header-generator platform
struct ReturnPolicy_NoReturn {
public:
    // ReturnPolicy_NoReturn inner types define
    using ReturnType = void;
};
#endif // @header-generator platform

} // namespace Bedrock::PubSub::Detail
