#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorHealCause.h"

struct ActorHealEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntity;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntity;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ActorHealCause> mCause;
    ::ll::TypedStorage<4, 4, float>            mHealing;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorHealEvent& operator=(ActorHealEvent const&);
    ActorHealEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
