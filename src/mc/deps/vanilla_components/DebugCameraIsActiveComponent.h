#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct DebugCameraIsActiveComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsActive;
    // NOLINTEND
};
#else // @header-generator platform
struct DebugCameraIsActiveComponent {};
#endif // @header-generator platform
