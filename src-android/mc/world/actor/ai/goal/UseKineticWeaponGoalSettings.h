#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"

struct UseKineticWeaponGoalSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mApproachDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRepositionDistance;
    ::ll::TypedStorage<4, 4, float>                     mRepositionSpeedMultiplier;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mCooldownDistance;
    ::ll::TypedStorage<4, 4, float>                     mCooldownSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                     mWeaponReachMultiplier;
    ::ll::TypedStorage<4, 4, float>                     mWeaponMinSpeedMultiplier;
    // NOLINTEND
};
