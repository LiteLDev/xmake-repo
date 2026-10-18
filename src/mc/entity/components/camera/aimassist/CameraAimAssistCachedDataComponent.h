#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraAimAssistCachedDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPlayerPickRange;
    ::ll::TypedStorage<1, 1, bool>  mTargetingLiquid;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraAimAssistCachedDataComponent {};
#endif // @header-generator platform
