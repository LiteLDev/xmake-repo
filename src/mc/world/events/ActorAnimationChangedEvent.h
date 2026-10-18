#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/entity/components/AnimationEventState.h"
#include "mc/entity/components/AnimationEventType.h"

struct ActorAnimationChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>      mEntity;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>      mEntity;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::AnimationEventType>  mType;
    ::ll::TypedStorage<4, 4, ::AnimationEventState> mState;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorAnimationChangedEvent& operator=(ActorAnimationChangedEvent const&);
    ActorAnimationChangedEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
