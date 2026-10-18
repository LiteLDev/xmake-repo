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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    AbsorptionMobEffect();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AbsorptionMobEffect();
#else // @header-generator platform
    virtual void removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyEffects(::Actor&, ::EffectDuration, int) const;

    virtual void removeEffects(::BaseAttributeMap&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyEffects(::Actor&, ::EffectDuration, int) const;
#else // @header-generator platform
    MCAPI void $removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeEffects(::BaseAttributeMap&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;
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
