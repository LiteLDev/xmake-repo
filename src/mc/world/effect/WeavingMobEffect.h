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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WeavingMobEffect();

    virtual void onActorDied(::Actor&, int) const;
#else // @header-generator platform
    virtual void onActorDied(::Actor& target, int amplifier) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& COBWEB_SLOWDOWN_OVERRIDE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Vec3 const& COBWEB_SLOWDOWN_OVERRIDE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onActorDied(::Actor&, int) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $onActorDied(::Actor& target, int amplifier) const;
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
