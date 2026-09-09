#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PFLobbyDisconnectingReason.h"
#include "mc/PFLobbyStateChange.h"

// auto generated forward declare list
// clang-format off
struct PFLobby;
// clang-format on

struct PFLobbyDisconnectingStateChange : public ::PFLobbyStateChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PFLobby const*>             lobby;
    ::ll::TypedStorage<4, 4, ::PFLobbyDisconnectingReason> reason;
    // NOLINTEND
};
