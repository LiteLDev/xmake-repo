#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/MeleeAttackBaseGoalDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_21_120 {

struct UseKineticWeaponGoalDefinition : public ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition {
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
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_COOLDOWN_DISTANCE();

    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_REPOSITION_DISTANCE();

    MCNAPI static std::string_view const& NAME();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_21_120
