#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::tasks::details {

#if defined(LL_PLAT_A) // @header-generator platform
struct Empty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mDummy;
    // NOLINTEND
};
#else // @header-generator platform
struct Empty {};
#endif // @header-generator platform

} // namespace dragon::tasks::details
