#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::tasks::coroutine {

#if defined(LL_PLAT_A) // @header-generator platform
struct TryAgain {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mDummy;
    // NOLINTEND
};
#else // @header-generator platform
struct TryAgain {};
#endif // @header-generator platform

} // namespace dragon::tasks::coroutine
