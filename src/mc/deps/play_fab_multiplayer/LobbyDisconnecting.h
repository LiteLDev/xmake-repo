#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFabMultiplayer {

#if defined(LL_PLAT_A) // @header-generator platform
struct LobbyDisconnecting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mLobbyId;
    // NOLINTEND
};
#else // @header-generator platform
struct LobbyDisconnecting {};
#endif // @header-generator platform

} // namespace PlayFabMultiplayer
