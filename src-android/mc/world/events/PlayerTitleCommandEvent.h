#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/SetTitlePacketPayload.h"

struct PlayerTitleCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mSender;
    ::ll::UntypedStorage<8, 24>                           mTargets;
    ::ll::TypedStorage<8, 24, std::string>                mTitle;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredTitle;
    ::ll::UntypedStorage<4, 4>                            mTitleType;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTitleCommandEvent& operator=(PlayerTitleCommandEvent const&);
    PlayerTitleCommandEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerTitleCommandEvent(::PlayerTitleCommandEvent const&);

    MCNAPI ~PlayerTitleCommandEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerTitleCommandEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
