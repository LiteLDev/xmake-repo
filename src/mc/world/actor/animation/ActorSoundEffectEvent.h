#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/ActorSoundEffect.h"

class ActorSoundEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::ActorSoundEffect> mSoundEffect;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorSoundEffect> mSoundEffect;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>               mTime;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorSoundEffectEvent& operator=(ActorSoundEffectEvent const&);
    ActorSoundEffectEvent(ActorSoundEffectEvent const&);
    ActorSoundEffectEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
