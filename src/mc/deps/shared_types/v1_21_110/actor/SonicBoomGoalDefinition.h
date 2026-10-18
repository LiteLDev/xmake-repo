#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_110 {

struct SonicBoomGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>        mDuration;
    ::ll::TypedStorage<4, 4, float>        mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>        mAttackDamage;
    ::ll::TypedStorage<4, 4, float>        mAttackRangeHorizontal;
    ::ll::TypedStorage<4, 4, float>        mAttackRangeVertical;
    ::ll::TypedStorage<4, 4, float>        mAttackCooldown;
    ::ll::TypedStorage<4, 4, float>        mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, float>        mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>        mKnockbackHeightCap;
    ::ll::TypedStorage<4, 4, float>        mDurationUntilAttackSound;
    ::ll::TypedStorage<8, 24, std::string> mAttackSound;
    ::ll::TypedStorage<8, 24, std::string> mChargeSound;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>          mDuration;
    ::ll::TypedStorage<4, 4, float>          mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>          mAttackDamage;
    ::ll::TypedStorage<4, 4, float>          mAttackRangeHorizontal;
    ::ll::TypedStorage<4, 4, float>          mAttackRangeVertical;
    ::ll::TypedStorage<4, 4, float>          mAttackCooldown;
    ::ll::TypedStorage<4, 4, float>          mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, float>          mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>          mKnockbackHeightCap;
    ::ll::TypedStorage<4, 4, float>          mDurationUntilAttackSound;
    ::ll::TypedStorage<8, 32, ::std::string> mAttackSound;
    ::ll::TypedStorage<8, 32, ::std::string> mChargeSound;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SonicBoomGoalDefinition& operator=(SonicBoomGoalDefinition const&);
    SonicBoomGoalDefinition(SonicBoomGoalDefinition const&);
    SonicBoomGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SonicBoomGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_110::SonicBoomGoalDefinition&
    operator=(::SharedTypes::v1_21_110::SonicBoomGoalDefinition&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
