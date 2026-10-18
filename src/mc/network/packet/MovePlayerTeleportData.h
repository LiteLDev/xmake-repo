#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovePlayerTeleportData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCause;
    ::ll::TypedStorage<4, 4, int> mSourceEntityType;
    // NOLINTEND
};
#endif // @header-generator platform
