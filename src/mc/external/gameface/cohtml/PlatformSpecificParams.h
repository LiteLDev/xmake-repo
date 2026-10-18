#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlatformSpecificParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*> JavaVM;
    // NOLINTEND
};
#else // @header-generator platform
struct PlatformSpecificParams {};
#endif // @header-generator platform

} // namespace cohtml
