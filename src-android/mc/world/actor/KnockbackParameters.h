#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/shared_types/ExtraKnockbackApproach.h"

struct KnockbackParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                                mPower;
    ::ll::TypedStorage<4, 4, float>                                 mVerticalVelocityCap;
    ::ll::TypedStorage<4, 4, float>                                 mSlowdownScale;
    ::ll::TypedStorage<1, 1, bool>                                  mScaleWithDamage;
    ::ll::TypedStorage<1, 1, bool>                                  mSlowDownAttacker;
    ::ll::TypedStorage<1, 1, bool>                                  mCheckLegacyPreNetherUpdateKnockback;
    ::ll::TypedStorage<4, 4, float>                                 mExtraKnockbackPower;
    ::ll::TypedStorage<1, 1, ::SharedTypes::ExtraKnockbackApproach> mExtraKnockbackApproach;
    // NOLINTEND
};
