#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::ThreadModel {

struct MultiThreadedStrict {
public:
    // MultiThreadedStrict inner types define
    using MutexType = std::recursive_mutex;
};

} // namespace Bedrock::PubSub::ThreadModel
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
