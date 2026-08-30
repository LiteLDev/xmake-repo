#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct ActorRemovedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRemovedEvent& operator=(ActorRemovedEvent const&);
    ActorRemovedEvent();
};
