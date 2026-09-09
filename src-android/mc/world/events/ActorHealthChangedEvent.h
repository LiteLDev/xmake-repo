#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct ActorHealthChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntity;
    ::ll::TypedStorage<4, 4, float>            mOldValue;
    ::ll::TypedStorage<4, 4, float>            mNewValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHealthChangedEvent& operator=(ActorHealthChangedEvent const&);
    ActorHealthChangedEvent();
};
