#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerMeCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mSender;
    ::ll::TypedStorage<8, 32, ::std::string>                  mMessage;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredMessage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerMeCommandEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
