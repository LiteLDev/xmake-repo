#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class SharedLock {};
#else // @header-generator platform
class SharedLock : public std::shared_lock<T0> {};
#endif // @header-generator platform

} // namespace Bedrock::Threading
