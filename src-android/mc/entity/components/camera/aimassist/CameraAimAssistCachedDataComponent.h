#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAimAssistCachedDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPlayerPickRange;
    ::ll::TypedStorage<1, 1, bool>  mTargetingLiquid;
    // NOLINTEND
};
