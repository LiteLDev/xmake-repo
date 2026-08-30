#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SneakingComponentConstants {

struct SneakingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHeightOffset;
    ::ll::TypedStorage<4, 4, float> mCameraOffset;
    // NOLINTEND
};

} // namespace SneakingComponentConstants
