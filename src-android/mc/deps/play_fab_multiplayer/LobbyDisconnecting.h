#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFabMultiplayer {

struct LobbyDisconnecting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mLobbyId;
    // NOLINTEND
};

} // namespace PlayFabMultiplayer
