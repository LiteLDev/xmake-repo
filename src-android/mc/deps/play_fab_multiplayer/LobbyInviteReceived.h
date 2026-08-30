#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFabMultiplayer {

struct LobbyInviteReceived {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mConnectionString;
    ::ll::TypedStorage<8, 24, std::string> mInviterPfid;
    ::ll::TypedStorage<8, 24, std::string> mLobbyId;
    // NOLINTEND
};

} // namespace PlayFabMultiplayer
