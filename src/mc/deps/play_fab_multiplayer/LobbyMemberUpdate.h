#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/play_fab_multiplayer/LobbyMemberConnectionStatus.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace PlayFabMultiplayer {

#if defined(LL_PLAT_A) // @header-generator platform
struct LobbyMemberUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                   mMemberPfid;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                      mUpdatedMemberPropertyKeys;
    ::ll::TypedStorage<4, 8, std::optional<PlayFabMultiplayer::LobbyMemberConnectionStatus>> mNewConnectionStatus;
    // NOLINTEND
};
#else // @header-generator platform
struct LobbyMemberUpdate {};
#endif // @header-generator platform

} // namespace PlayFabMultiplayer
