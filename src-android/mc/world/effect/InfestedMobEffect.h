#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
// clang-format on

class InfestedMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InfestedMobEffect();

    virtual void onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
