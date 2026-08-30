#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/WeakRef.h"

struct PlayerTellRawCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSender;
    ::ll::UntypedStorage<8, 24>            mTargets;
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTellRawCommandEvent& operator=(PlayerTellRawCommandEvent const&);
    PlayerTellRawCommandEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerTellRawCommandEvent(::PlayerTellRawCommandEvent const&);

    MCNAPI ~PlayerTellRawCommandEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerTellRawCommandEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
