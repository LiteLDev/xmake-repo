#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct PlayerDisconnectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDisconnectEvent& operator=(PlayerDisconnectEvent const&);
    PlayerDisconnectEvent();
};
