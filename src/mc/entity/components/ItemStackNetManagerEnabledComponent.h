#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackNetManagerEnabledComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, std::atomic<int>> mManagerCounter;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::atomic<int>> mManagerCounter;
#endif // @header-generator platform
    // NOLINTEND
};
