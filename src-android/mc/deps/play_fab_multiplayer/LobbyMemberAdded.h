#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFabMultiplayer {

struct LobbyMemberAdded {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mLobbyId;
    ::ll::TypedStorage<8, 24, std::string> mMemberPfid;
    // NOLINTEND
};

} // namespace PlayFabMultiplayer
