#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PFEntityKey.h"
#include "mc/PFLobbyStateChange.h"

struct PFLobbyInviteReceivedStateChange : public ::PFLobbyStateChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::PFEntityKey> listeningEntity;
    ::ll::TypedStorage<8, 16, ::PFEntityKey> invitingEntity;
    ::ll::TypedStorage<8, 8, char const*>    connectionString;
    ::ll::TypedStorage<8, 8, char const*>    lobbyId;
    // NOLINTEND
};
