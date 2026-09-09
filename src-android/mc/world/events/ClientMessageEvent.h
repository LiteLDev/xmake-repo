#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptMessagePacket;
// clang-format on

struct ClientMessageEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessageId;
    ::ll::TypedStorage<8, 24, std::string> mMessageValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientMessageEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientMessageEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
