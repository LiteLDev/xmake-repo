#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PFLobbyStateChange.h"

// auto generated forward declare list
// clang-format off
struct PFLobby;
struct PFLobbyMemberUpdateSummary;
// clang-format on

struct PFLobbyUpdatedStateChange : public ::PFLobbyStateChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PFLobby const*>                    lobby;
    ::ll::TypedStorage<1, 1, bool>                                ownerUpdated;
    ::ll::TypedStorage<1, 1, bool>                                maxMembersUpdated;
    ::ll::TypedStorage<1, 1, bool>                                accessPolicyUpdated;
    ::ll::TypedStorage<1, 1, bool>                                membershipLockUpdated;
    ::ll::TypedStorage<4, 4, uint>                                updatedSearchPropertyCount;
    ::ll::TypedStorage<8, 8, char const* const*>                  updatedSearchPropertyKeys;
    ::ll::TypedStorage<4, 4, uint>                                updatedLobbyPropertyCount;
    ::ll::TypedStorage<8, 8, char const* const*>                  updatedLobbyPropertyKeys;
    ::ll::TypedStorage<4, 4, uint>                                memberUpdateCount;
    ::ll::TypedStorage<8, 8, ::PFLobbyMemberUpdateSummary const*> memberUpdates;
    ::ll::TypedStorage<1, 1, bool>                                serverUpdated;
    ::ll::TypedStorage<4, 4, uint>                                updatedServerPropertyCount;
    ::ll::TypedStorage<8, 8, char const* const*>                  updatedServerPropertyKeys;
    ::ll::TypedStorage<1, 1, bool>                                serverConnectionStatusUpdated;
    ::ll::TypedStorage<1, 1, bool>                                restrictInvitesToLobbyOwnerUpdated;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
