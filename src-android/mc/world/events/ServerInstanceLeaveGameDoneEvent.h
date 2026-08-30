#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ServerInstance;
// clang-format on

struct ServerInstanceLeaveGameDoneEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mServerInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstanceLeaveGameDoneEvent& operator=(ServerInstanceLeaveGameDoneEvent const&);
    ServerInstanceLeaveGameDoneEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerInstanceLeaveGameDoneEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
