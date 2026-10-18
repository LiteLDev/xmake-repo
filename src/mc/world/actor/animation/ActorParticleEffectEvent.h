#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/ActorParticleEffect.h"

class ActorParticleEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 104, ::ActorParticleEffect> mParticleEffect;
#else // @header-generator platform
    ::ll::TypedStorage<8, 120, ::ActorParticleEffect> mParticleEffect;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                   mTime;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorParticleEffectEvent& operator=(ActorParticleEffectEvent const&);
    ActorParticleEffectEvent(ActorParticleEffectEvent const&);
    ActorParticleEffectEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
