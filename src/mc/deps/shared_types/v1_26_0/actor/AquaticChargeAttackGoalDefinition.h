#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_120 { struct AquaticChargeAttackGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_26_0 {

struct AquaticChargeAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mMaxChargeDistance;
    ::ll::TypedStorage<4, 4, float>                     mAttackReach;
    ::ll::TypedStorage<4, 4, float>                     mKnockbackForce;
    ::ll::TypedStorage<4, 4, float>                     mChargeOvershootDistance;
    ::ll::TypedStorage<4, 4, float>                     mChargeSpeed;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mChargeCooldownTime;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<float>>      mChargeSpeedMultiplierDeprecated;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<float>>    mChargeSpeedMultiplierDeprecated;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_COOLDOWN();

    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
