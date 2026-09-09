#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseAttributeMap;
struct EffectDuration;
// clang-format on

class AbsorptionMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    AbsorptionMobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbsorptionMobEffect();

    virtual void applyEffects(::Actor&, ::EffectDuration, int) const;

    virtual void removeEffects(::BaseAttributeMap&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $applyEffects(::Actor&, ::EffectDuration, int) const;

    MCNAPI void $removeEffects(::BaseAttributeMap&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
