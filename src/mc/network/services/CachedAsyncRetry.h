#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

struct CachedAsyncRetry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mDelay;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds> mDelay;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Threading
