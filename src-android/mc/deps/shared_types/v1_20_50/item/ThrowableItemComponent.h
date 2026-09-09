#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct ThrowableItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLaunchPowerScale;
    ::ll::TypedStorage<4, 4, float> mMaxLaunchPower;
    ::ll::TypedStorage<4, 4, float> mMinDrawDuration;
    ::ll::TypedStorage<4, 4, float> mMaxDrawDuration;
    ::ll::TypedStorage<1, 1, bool>  mDoSwingAnimation;
    ::ll::TypedStorage<1, 1, bool>  mScalePowerByDrawDuration;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
