#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/WeakRef.h"

struct PlayerTellCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mSender;
    ::ll::UntypedStorage<8, 24>                           mTargets;
    ::ll::TypedStorage<8, 24, std::string>                mMessage;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTellCommandEvent& operator=(PlayerTellCommandEvent const&);
    PlayerTellCommandEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerTellCommandEvent(::PlayerTellCommandEvent const&);

    MCNAPI ~PlayerTellCommandEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerTellCommandEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
