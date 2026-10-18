#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PFEntityKey.h"
#include "mc/PFLobbyStateChange.h"

// auto generated forward declare list
// clang-format off
struct PFLobby;
// clang-format on

struct PFLobbyConnectToLobbyCompletedStateChange : public ::PFLobbyStateChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>              result;
    ::ll::TypedStorage<8, 16, ::PFEntityKey>   newMember;
    ::ll::TypedStorage<8, 8, char const*>      lobbyId;
    ::ll::TypedStorage<8, 8, void*>            asyncContext;
    ::ll::TypedStorage<8, 8, ::PFLobby const*> lobby;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
