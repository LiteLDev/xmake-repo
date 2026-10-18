#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/ErrorInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace PlayFabMultiplayer {

#if defined(LL_PLAT_A) // @header-generator platform
struct LobbyConnected {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mLobbyId;
    ::ll::UntypedStorage<8, 72>                           mResult;
    // NOLINTEND
};
#else // @header-generator platform
struct LobbyConnected {};
#endif // @header-generator platform

} // namespace PlayFabMultiplayer
