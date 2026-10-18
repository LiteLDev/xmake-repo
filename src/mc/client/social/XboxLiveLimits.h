#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct XboxLiveLimits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> burstLimit;
    ::ll::TypedStorage<4, 4, uint> sustainLimit;
    // NOLINTEND
};
#else // @header-generator platform
struct XboxLiveLimits {};
#endif // @header-generator platform

} // namespace Social
