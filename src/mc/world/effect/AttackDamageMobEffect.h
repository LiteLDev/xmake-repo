#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class AttributeModifier;
// clang-format on

class AttackDamageMobEffect : public ::MobEffect {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    AttackDamageMobEffect();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AttackDamageMobEffect();

    virtual float getAttributeModifierValue(int, ::AttributeModifier const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float getDamageAfterDamageBoost(float, int);

    MCNAPI static float getDamageAfterWeakness(float, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual float getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getAttributeModifierValue(int, ::AttributeModifier const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI float $getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
