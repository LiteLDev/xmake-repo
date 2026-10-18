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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RaidOmenMobEffect();
#else // @header-generator platform
    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyEffects(::Actor&, ::EffectDuration, int) const;

    virtual void onEffectExpired(::Actor&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void onEffectExpired(::Actor& target) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyEffects(::Actor&, ::EffectDuration, int) const;
#else // @header-generator platform
    MCAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onEffectExpired(::Actor&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $onEffectExpired(::Actor& target) const;
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
