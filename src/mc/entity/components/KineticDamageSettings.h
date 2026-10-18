#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/entity/components/KineticEffectConditions.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_90 { struct KineticWeaponItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct KineticDamageSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<KineticEffectConditions>> mDamageConditions;
    ::ll::TypedStorage<4, 16, std::optional<KineticEffectConditions>> mKnockbackConditions;
    ::ll::TypedStorage<4, 16, std::optional<KineticEffectConditions>> mDismountConditions;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>               mReach;
    ::ll::TypedStorage<4, 12, std::optional<SharedTypes::FloatRange>> mCreativeReach;
    ::ll::TypedStorage<4, 4, float>                                   mHitboxMargin;
    ::ll::TypedStorage<4, 4, float>                                   mDamageModifier;
    ::ll::TypedStorage<4, 4, float>                                   mDamageMultiplier;
    ::ll::TypedStorage<2, 2, ushort>                                  mDelay;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 16> mUnk99fc48;
    ::ll::UntypedStorage<4, 16> mUnk18b739;
    ::ll::UntypedStorage<4, 16> mUnk3b0935;
    ::ll::UntypedStorage<4, 8>  mUnkcfdebd;
    ::ll::UntypedStorage<4, 12> mUnkc2522a;
    ::ll::UntypedStorage<4, 4>  mUnkab3188;
    ::ll::UntypedStorage<4, 4>  mUnk7d7e6f;
    ::ll::UntypedStorage<4, 4>  mUnk98b7f2;
    ::ll::UntypedStorage<2, 2>  mUnk6951cb;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    KineticDamageSettings& operator=(KineticDamageSettings const&);
    KineticDamageSettings(KineticDamageSettings const&);
    KineticDamageSettings();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit KineticDamageSettings(::SharedTypes::v1_21_90::KineticWeaponItemComponent const&);
#else // @header-generator platform
    MCAPI explicit KineticDamageSettings(::SharedTypes::v1_21_90::KineticWeaponItemComponent const& data);
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
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_90::KineticWeaponItemComponent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_90::KineticWeaponItemComponent const& data);
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// free functions
// NOLINTBEGIN
MCFOLD bool operator==(::KineticDamageSettings const&, ::KineticDamageSettings const&);
// NOLINTEND
#endif // @header-generator platform
