#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraAimAssistTickComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTick;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraAimAssistTickComponent {};
#endif // @header-generator platform
