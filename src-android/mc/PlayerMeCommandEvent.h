#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerMeCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mSender;
    ::ll::TypedStorage<8, 24, std::string>                mMessage;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMeCommandEvent& operator=(PlayerMeCommandEvent const&);
    PlayerMeCommandEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerMeCommandEvent(::PlayerMeCommandEvent const&);

    MCNAPI ~PlayerMeCommandEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerMeCommandEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
