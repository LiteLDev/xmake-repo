#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0, typename T1>
#if defined(LL_PLAT_A) // @header-generator platform
class BasicLockbox {};
#else // @header-generator platform
class BasicLockbox {
public:
    T1 mMutex;
    T0 mContent;
};
#endif // @header-generator platform

} // namespace Bedrock::Threading
