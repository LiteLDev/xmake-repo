#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct PlayerClosedContainerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerClosedContainerEvent& operator=(PlayerClosedContainerEvent const&);
    PlayerClosedContainerEvent();
};
