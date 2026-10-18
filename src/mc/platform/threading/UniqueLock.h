#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class UniqueLock {};
#else // @header-generator platform
class UniqueLock : std::unique_lock<T0> {};
#endif // @header-generator platform

} // namespace Bedrock::Threading
