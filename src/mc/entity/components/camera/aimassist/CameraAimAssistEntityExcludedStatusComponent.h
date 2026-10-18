#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraAimAssistEntityExcludedStatusComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsExcluded;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraAimAssistEntityExcludedStatusComponent {};
#endif // @header-generator platform
