#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class LockGuard {};
#else // @header-generator platform
class LockGuard : std::lock_guard<T0> {};
#endif // @header-generator platform

} // namespace Bedrock::Threading
