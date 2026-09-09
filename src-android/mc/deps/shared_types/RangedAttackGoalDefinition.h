#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

namespace SharedTypes::v1_26_40 {

struct RangedAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                       mBurstShots;
    ::ll::TypedStorage<4, 4, float>                     mTargetInSightTime;
    ::ll::TypedStorage<4, 4, float>                     mBurstCooldownTime;
    ::ll::TypedStorage<4, 4, float>                     mChargeReadyTime;
    ::ll::TypedStorage<4, 4, float>                     mChargeReloadTime;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mReloadTime;
    ::ll::TypedStorage<4, 4, float>                     mAttackRadius;
    ::ll::TypedStorage<4, 4, float>                     mAttackRadiusMin;
    ::ll::TypedStorage<4, 4, float>                     mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                     mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                     mRangedFov;
    ::ll::TypedStorage<4, 4, float>                     mSpeedMultiplier;
    ::ll::TypedStorage<1, 1, bool>                      mSetPersistent;
    ::ll::TypedStorage<1, 1, bool>                      mSwing;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
