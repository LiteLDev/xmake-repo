#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/play_fab_multiplayer/LobbyMemberUpdate.h"
#include "mc/deps/play_fab_multiplayer/SupportedLobbyAccessPolicy.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace PlayFabMultiplayer {

#if defined(LL_PLAT_A) // @header-generator platform
struct LobbyUpdated {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                  mLobbyId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                   mNewOwnerPfid;
    ::ll::TypedStorage<4, 8, std::optional<PlayFabMultiplayer::SupportedLobbyAccessPolicy>> mNewAccessPolicy;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                            mNewMaxMembers;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                     mUpdatedLobbyPropertyKeys;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                     mUpdatedServerPropertyKeys;
    ::ll::TypedStorage<8, 24, std::vector<PlayFabMultiplayer::LobbyMemberUpdate>>           mLobbyMemberUpdates;
    // NOLINTEND
};
#else // @header-generator platform
struct LobbyUpdated {};
#endif // @header-generator platform

} // namespace PlayFabMultiplayer
