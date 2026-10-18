#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFabMultiplayer {

#if defined(LL_PLAT_A) // @header-generator platform
struct LobbyMemberRemoved {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mLobbyId;
    ::ll::TypedStorage<8, 24, std::string> mMemberPfid;
    // NOLINTEND
};
#else // @header-generator platform
struct LobbyMemberRemoved {};
#endif // @header-generator platform

} // namespace PlayFabMultiplayer
