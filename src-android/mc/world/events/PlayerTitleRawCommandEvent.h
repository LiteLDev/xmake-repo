#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/SetTitlePacketPayload.h"

struct PlayerTitleRawCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSender;
    ::ll::UntypedStorage<8, 24>            mTargets;
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::UntypedStorage<4, 4>             mTitleType;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTitleRawCommandEvent& operator=(PlayerTitleRawCommandEvent const&);
    PlayerTitleRawCommandEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerTitleRawCommandEvent(::PlayerTitleRawCommandEvent const&);

    MCNAPI ~PlayerTitleRawCommandEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerTitleRawCommandEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
