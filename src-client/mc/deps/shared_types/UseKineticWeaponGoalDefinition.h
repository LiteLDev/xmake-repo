#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/MeleeAttackBaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

namespace SharedTypes::v1_26_40 {

struct UseKineticWeaponGoalDefinition : public ::SharedTypes::v1_26_40::MeleeAttackBaseGoalDefinition {
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

} // namespace SharedTypes::v1_26_40
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
