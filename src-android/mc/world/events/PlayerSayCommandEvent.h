#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSayCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mSender;
    ::ll::TypedStorage<8, 24, std::string>                mMessage;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSayCommandEvent& operator=(PlayerSayCommandEvent const&);
    PlayerSayCommandEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerSayCommandEvent(::PlayerSayCommandEvent const&);

    MCNAPI ~PlayerSayCommandEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerSayCommandEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
