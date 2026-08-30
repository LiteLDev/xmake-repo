#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/ErrorInfo.h"

namespace PlayFabMultiplayer {

struct LobbyConnected {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mLobbyId;
    ::ll::UntypedStorage<8, 72>                           mResult;
    // NOLINTEND
};

} // namespace PlayFabMultiplayer
