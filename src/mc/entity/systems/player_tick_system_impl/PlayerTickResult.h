#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerTickSystemImpl {

struct PlayerTickResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long> mTicksToDequeue;
    ::ll::TypedStorage<1, 1, bool> mProcessTop;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64> mTicksToDequeue;
    ::ll::TypedStorage<1, 1, bool>  mProcessTop;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PlayerTickSystemImpl
