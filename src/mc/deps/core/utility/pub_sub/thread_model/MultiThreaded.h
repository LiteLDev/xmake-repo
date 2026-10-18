#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::ThreadModel {

#if defined(LL_PLAT_A) // @header-generator platform
struct MultiThreaded {
public:
    // MultiThreaded inner types define
    using MutexType = std::mutex;
};
#else // @header-generator platform
struct MultiThreaded {};
#endif // @header-generator platform

} // namespace Bedrock::PubSub::ThreadModel
