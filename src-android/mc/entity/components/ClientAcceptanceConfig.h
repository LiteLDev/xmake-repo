#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientAcceptanceConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mCooldownRate;
    ::ll::TypedStorage<4, 4, float> mMaxCooldown;
    ::ll::TypedStorage<4, 4, float> mMaxVerticalAcceptance;
    ::ll::TypedStorage<4, 4, float> mMaxHorizontalAcceptance;
    ::ll::TypedStorage<4, 4, float> mMinAcceptanceEpsilon;
    ::ll::TypedStorage<1, 1, bool>  mUseHorizontalCollisions;
    ::ll::TypedStorage<1, 1, bool>  mUseVerticalCollisions;
    ::ll::TypedStorage<1, 1, bool>  mReplenishCooldownOnAcceptance;
    // NOLINTEND
};
