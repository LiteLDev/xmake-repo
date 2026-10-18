#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PFEntityKey.h"
#include "mc/PFLobbyMemberRemovedReason.h"
#include "mc/PFLobbyStateChange.h"

// auto generated forward declare list
// clang-format off
struct PFLobby;
// clang-format on

struct PFLobbyMemberRemovedStateChange : public ::PFLobbyStateChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PFLobby const*>             lobby;
    ::ll::TypedStorage<8, 16, ::PFEntityKey>               member;
    ::ll::TypedStorage<4, 4, ::PFLobbyMemberRemovedReason> reason;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
