#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/play_fab_multiplayer/LobbyMemberConnectionStatus.h"

namespace PlayFabMultiplayer {

struct LobbyMemberUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                   mMemberPfid;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                      mUpdatedMemberPropertyKeys;
    ::ll::TypedStorage<4, 8, std::optional<PlayFabMultiplayer::LobbyMemberConnectionStatus>> mNewConnectionStatus;
    // NOLINTEND
};

} // namespace PlayFabMultiplayer
