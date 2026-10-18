#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_90/item/KineticEffectConditions.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {

struct KineticWeaponItemComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<SharedTypes::v1_21_90::KineticEffectConditions>> mDamageConditions;
    ::ll::TypedStorage<4, 16, std::optional<SharedTypes::v1_21_90::KineticEffectConditions>> mKnockbackConditions;
    ::ll::TypedStorage<4, 16, std::optional<SharedTypes::v1_21_90::KineticEffectConditions>> mDismountConditions;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                                      mReach;
    ::ll::TypedStorage<4, 12, std::optional<SharedTypes::FloatRange>>                        mCreativeReach;
    ::ll::TypedStorage<4, 4, float>                                                          mHitboxMargin;
    ::ll::TypedStorage<4, 4, float>                                                          mDamageModifier;
    ::ll::TypedStorage<4, 4, float>                                                          mDamageMultiplier;
    ::ll::TypedStorage<2, 2, short>                                                          mDelay;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::SharedTypes::v1_21_90::KineticEffectConditions>> mDamageConditions;
    ::ll::TypedStorage<4, 16, ::std::optional<::SharedTypes::v1_21_90::KineticEffectConditions>> mKnockbackConditions;
    ::ll::TypedStorage<4, 16, ::std::optional<::SharedTypes::v1_21_90::KineticEffectConditions>> mDismountConditions;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                                          mReach;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::FloatRange>>                        mCreativeReach;
    ::ll::TypedStorage<4, 4, float>                                                              mHitboxMargin;
    ::ll::TypedStorage<4, 4, float>                                                              mDamageModifier;
    ::ll::TypedStorage<4, 4, float>                                                              mDamageMultiplier;
    ::ll::TypedStorage<2, 2, short>                                                              mDelay;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_90::KineticWeaponItemComponent const&) const;
#else // @header-generator platform
    MCFOLD bool operator==(::SharedTypes::v1_21_90::KineticWeaponItemComponent const&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_REACH();

    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
