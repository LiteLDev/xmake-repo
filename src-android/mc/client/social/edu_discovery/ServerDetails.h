#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/edu_discovery/ServerConnectionInfo.h"

namespace EDUDiscovery {

struct ServerDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                          worldName;
    ::ll::TypedStorage<8, 24, std::string>                          playerName;
    ::ll::TypedStorage<8, 24, std::string>                          passcode;
    ::ll::TypedStorage<4, 4, int>                                   playerCount;
    ::ll::TypedStorage<4, 4, int>                                   maxPlayers;
    ::ll::TypedStorage<8, 56, ::EDUDiscovery::ServerConnectionInfo> connectionInfo;
    // NOLINTEND
};

} // namespace EDUDiscovery
