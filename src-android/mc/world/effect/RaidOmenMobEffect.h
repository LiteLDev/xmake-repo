#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct EffectDuration;
// clang-format on

class RaidOmenMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RaidOmenMobEffect();

    virtual void applyEffects(::Actor&, ::EffectDuration, int) const;

    virtual void onEffectExpired(::Actor&) const;
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

    MCNAPI void $onEffectExpired(::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
