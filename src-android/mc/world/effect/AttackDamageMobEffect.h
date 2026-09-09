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
    // prevent constructor by default
    AttackDamageMobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getAttributeModifierValue(int, ::AttributeModifier const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
