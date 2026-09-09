#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

struct CachedAsyncRetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mDelay;
    // NOLINTEND
};

} // namespace Bedrock::Threading
