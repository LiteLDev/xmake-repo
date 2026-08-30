#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct PlayerEmoteEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
    ::ll::TypedStorage<8, 24, std::string>     mEmotePieceId;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerEmoteEvent& operator=(PlayerEmoteEvent const&);
    PlayerEmoteEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerEmoteEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
