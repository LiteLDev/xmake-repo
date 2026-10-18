#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFabMultiplayer {

#if defined(LL_PLAT_A) // @header-generator platform
struct LobbyInviteReceived {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mConnectionString;
    ::ll::TypedStorage<8, 24, std::string> mInviterPfid;
    ::ll::TypedStorage<8, 24, std::string> mLobbyId;
    // NOLINTEND
};
#else // @header-generator platform
struct LobbyInviteReceived {};
#endif // @header-generator platform

} // namespace PlayFabMultiplayer
