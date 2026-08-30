#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class WeavingMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WeavingMobEffect();

    virtual void onActorDied(::Actor&, int) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& COBWEB_SLOWDOWN_OVERRIDE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onActorDied(::Actor&, int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
