#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_21_120 {

struct AquaticChargeAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mMaxChargeDistance;
    ::ll::TypedStorage<4, 4, float>                     mChargeSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                     mAttackReach;
    ::ll::TypedStorage<4, 4, float>                     mKnockbackForce;
    ::ll::TypedStorage<4, 4, float>                     mChargeOvershootDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mChargeCooldownTime;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_COOLDOWN();

    MCNAPI static std::string_view const& NAME();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_21_120
