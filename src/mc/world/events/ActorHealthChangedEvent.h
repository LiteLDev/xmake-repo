#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct ActorHealthChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntity;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntity;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>            mOldValue;
    ::ll::TypedStorage<4, 4, float>            mNewValue;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorHealthChangedEvent& operator=(ActorHealthChangedEvent const&);
    ActorHealthChangedEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
