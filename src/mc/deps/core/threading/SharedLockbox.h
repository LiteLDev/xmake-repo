#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/threading/BasicLockbox.h"
#endif // @header-generator platform

namespace Bedrock::Threading {

template <typename T0, typename T1>
#if defined(LL_PLAT_A) // @header-generator platform
class SharedLockbox {};
#else // @header-generator platform
class SharedLockbox : public BasicLockbox<T0, T1> {};
#endif // @header-generator platform

} // namespace Bedrock::Threading
