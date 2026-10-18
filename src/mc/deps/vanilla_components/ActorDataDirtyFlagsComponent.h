#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDataDirtyFlagsComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::bitset<141>> mDirtyFlags;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::bitset<141>> mDirtyFlags;
#endif // @header-generator platform
    // NOLINTEND
};
